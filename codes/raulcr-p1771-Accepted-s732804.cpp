#include <bits/stdc++.h>

using namespace std;

const int oo = 1e7;
const int MAXN = 1001;
int N, M;
int C[MAXN];
bool mk[MAXN];
vector<int> adjl[MAXN];
typedef pair<int, int> pii;

int Dijkstra(){
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    vector<int> Cost(N + 1, oo);
    Cost[1] = 0;
    Q.push(pii(1, C[1]));

    while(!Q.empty()){
        int nod = Q.top().first;
        int cos = Q.top().second;
        Q.pop();

//        if (mk[nod])
//            continue;
//        mk[nod] = true;

        for(int i = 0 ; i < adjl[nod].size() ; i++){
            int nn = adjl[nod][i];
            int nc = cos + C[nn];

            if(Cost[nn] > nc){
                Cost[nn] = nc;
                Q.push(make_pair(nn, nc));
            }
        }
    }
    return Cost[N];
}

int main()
{
    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++)
        cin >> C[i];

    for(int i = 1 ; i <= M ; i++){
        int a, b;
        cin >> a >> b;

        adjl[a].push_back(b);
        adjl[b].push_back(a);
    }

    cout << Dijkstra() - (C[1] + C[N]);

    return 0;
}
