///by taskkill
#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef pair<int, int> pii;
typedef pair<int, pii> pii3;

const int MAXN = 101;
const int oo = 3e4 + 1;

int T, N, M;
int D[MAXN][MAXN];
bool mk[MAXN];
vector<pii> aristasmst;
int fmst, smst;

int Prim(){
    fill(mk + 1, mk + 1 + N, 0);

    int pr = 0;

    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Q.push(pii(0,1));

    while(!Q.empty()){
        int n = Q.top().s;
        int c = Q.top().f;

        Q.pop();

        if(mk[n])
            continue;

        mk[n] = true;

        pr += c;

        for(int i = 1 ; i <= N ; i++){
            int nc = D[i][n];

            if(!mk[i] && nc != oo)
                Q.push(pii(nc, i));
        }
    }
    return pr;
}

void buildsmst(){
    for(int i = 1 ; i < aristasmst.size() ; i++){
        int k1 = aristasmst[i].f;
        int k2 = aristasmst[i].s;

        int dis = D[k1][k2];

        D[k1][k2] = D[k2][k1] = oo;

        int mst = Prim();

        if(smst > mst && mst >= fmst)
            smst = mst;

        D[k1][k2] = D[k2][k1] = dis;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N >> M;

        fmst = 0;
        smst = oo;

        for(int i = 1 ; i <= N ; i++){
            fill(D[i] + 1, D[i] + 1 + N, oo);
            D[i][i] = 0;
        }

        for(int i = 1 ; i <= M ; i++){
            int a, b, c;
            cin >> a >> b >> c;

            if(c < D[a][b])
                D[a][b] = D[b][a] = c;
        }

        fill(mk + 1, mk + 1 + N, 0);

        priority_queue<pii3, vector<pii3>, greater<pii3> > Q;
        Q.push(pii3(0, pii(1, 1)));

        while(!Q.empty()){
            int n = Q.top().s.f;
            int p = Q.top().s.s;
            int c = Q.top().f;

            Q.pop();

            if(mk[n])
                continue;

            mk[n] = true;
            fmst += c;
            aristasmst.push_back(pii(p, n));

            for(int i = 1 ; i <= N ; i++){
                int nc = D[i][n];

                if(!mk[i] && nc != oo)
                    Q.push(pii3(nc, pii(i, n)));
            }
        }

        buildsmst();

        while(aristasmst.size())
            aristasmst.pop_back();

        cout << fmst << ' ' << smst << '\n';
    }
    return 0;
}
