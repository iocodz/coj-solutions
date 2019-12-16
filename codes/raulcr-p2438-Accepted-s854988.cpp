#include <bits/stdc++.h>

using namespace std;

//typedef pair<int, int> pii;

const int MAXN = 1001;

int N, M;
map<int, int> tol;
map<string, int> id;
map<int, string> names;
vector<int> ad[MAXN];
bool mk[MAXN];
vector<string> sol;

int bfs(int nod)
{
    queue<int> Q;
    int ret = 0;

    Q.push(nod);

    while(!Q.empty()){
        int nn = Q.front();

        Q.pop();

        mk[nn] = true;

        if(tol[nn] > tol[ret])
            ret = nn;

        for(int i = 0 ; i < ad[nn].size() ; i++)
            if(!mk[ad[nn][i]])
                Q.push(ad[nn][i]);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tol[0] = 0;

    while(cin >> N >> M && (N || M)){
        for(int i = 1 ; i <= N ; i++){
            string a;
            int b;
            cin >> a >> b;
            names[i] = a;
            id[a] = i;
            tol[i] = b;
        }

        for(int i = 1 ; i <= M ; i++){
            string a, b;
            cin >> a >> b;

            ad[id[a]].push_back(id[b]);
            ad[id[b]].push_back(id[a]);
        }

        for(int i = 1 ; i <= N ; i++)
            if(!mk[i])
                sol.push_back(names[bfs(i)]);

        sort(sol.begin(), sol.end());

        for(int i = 0 ; i < sol.size() ; i++)
            cout << sol[i] << '\n';

        tol.clear();
        names.clear();
        id.clear();

        sol.clear();

        for(int i = 1 ; i <= N ; i++){
            mk[i] = false;
            ad[i].clear();
        }
    }
    return 0;
}