#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

int N, M, T, k;
bool mk[MAXN];
int id[MAXN];
vector<int> ar[MAXN];

void t_p(int nod){
    mk[nod] = true;

    int siz = ar[nod].size();
    for(int i = 0 ; i < siz ; i++){
        if(!mk[ar[nod][i]]){
            t_p(ar[nod][i]);
        }
    }
    id[k--] = nod;
}

void dfs(int nod){
    mk[nod] = 0;

    int siz = ar[nod].size();
    for(int i = 0 ; i < siz ; i++){
        if(mk[ar[nod][i]]){
            dfs(ar[nod][i]);
        }
    }
}

int main()
{
//    freopen("r.in", "r", stdin);
//    freopen("r.out", "w", stdout);

    cin >> T;

    while(T--){
        cin >> N >> M;

        k = N;

        for(int i = 1 ; i <= M ; i++){
            int a, b;
            cin >> a >> b;

            ar[a].push_back(b);
        }

        for(int i = 1 ; i <= N ; i++)
            if(!mk[i])
                t_p(i);

        int sol = 0;
        for(int i = 1 ; i <= N ; i++){
            if(mk[id[i]]){
                dfs(id[i]);
                sol++;
            }
        }

        cout << sol << '\n';

        for(int i = 1; i <= N ; i++)
            ar[i].clear();
    }

    return 0;
}
