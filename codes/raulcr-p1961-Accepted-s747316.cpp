#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef pair<int, int> pii;
typedef pair<int, pii> pii3;

const int MAXN = 101;
const int oo = 1e7 + 1;

int N, M;
int D[MAXN][MAXN];
int P[MAXN];
int dis = 0, sol = 0;

int Dijkstra(int ni, int nf, bool flag = 1){
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Q.push(make_pair(0, 1));

    vector<int> Cost(N + 1, oo);

    while(!Q.empty()){
        int n = Q.top().s;
        int c = Q.top().f;

        Q.pop();

        for(int i = 1 ; i <= N ; i++){
            int nc = D[i][n] + c;
            if(i == n)
                continue;

            if(Cost[i] > nc){
                Cost[i] = nc;
                Q.push(make_pair(nc, i));
                if(flag)
                    P[i] = n;
            }
        }
    }

    return Cost[nf];
}

void dfs(int nod){
    if(!P[nod])
        return;

    int ds = D[nod][P[nod]];

    D[nod][P[nod]] = D[P[nod]][nod] = 2 * ds;

    int k = Dijkstra(1, N, 0);

    if(k - dis > sol)
        sol = k - dis;

    D[nod][P[nod]] = D[P[nod]][nod] = ds;

    nod = P[nod];

    return dfs(nod);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen(".in", "r", stdin);

    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++)
        fill(D[i] + 1, D[i] + 1 + N, oo);

    for(int i = 1 ; i <= M ; i++){
        int a, b, c;
        cin >> a >> b >> c;

        D[a][b] = D[b][a] = c;
    }

    dis = Dijkstra(1, N);
    P[1] = 0;

//    for(int i = 1 ; i <= N ; i++)
//        cout << P[i] << ' ';

    dfs(N);

    cout << sol;

    return 0;
}
