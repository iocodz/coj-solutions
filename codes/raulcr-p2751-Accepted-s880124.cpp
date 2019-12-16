#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1e5 + 1;
const int MAXM = 1e3 + 1;

int N, M, K;
vector<int> id[MAXN];
vector<int> T[MAXM];
bool mkn[MAXN];
bool mk[MAXM];

int bfs(){
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Q.push(pii(1, 1));
    mkn[1] = true;

    while(!Q.empty()){
        int nod = Q.top().second;
        int cs = Q.top().first;

        Q.pop();

        if(nod == N)
            return cs;

        for(int i = 0 ; i < id[nod].size() ; i++){
            int ind = id[nod][i];
            if(!mk[ind]){
                mk[ind] = true;
                for(int j = 0 ; j < T[ind].size() ; j++){
                    if(!mkn[T[ind][j]]){
                        Q.push(pii(cs + 1, T[ind][j]));
                        mkn[T[ind][j]];
                    }
                }
            }
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K;

    for(int i = 1 ; i <= K ; i++)
        for(int j = 1 ; j <= M ; j++){
            int a;
            cin >> a;
            id[a].push_back(i);
            T[i].push_back(a);
        }

    cout << bfs();

    return 0;
}
