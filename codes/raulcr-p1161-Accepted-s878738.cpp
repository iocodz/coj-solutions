#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 5001;

int N, M, Bar, Charl, Nito;
int cop[MAXN];
int B[MAXN];
int C[MAXN];
int Ni[MAXN];

vector<pii> ad[MAXN];

void Dijks(int ini, int id){
    fill(cop + 1, cop + 1 + N, (1 << 30));

    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Q.push(pii(0, ini));

    cop[ini] = 0;

    while(!Q.empty()){
        int cost = Q.top().first;
        int nod = Q.top().second;

        Q.pop();

        for(int i = 0 ; i < ad[nod].size() ; i++){
            int ncos = ad[nod][i].first + cost;
            int nn = ad[nod][i].second;

            if(cop[nn] > ncos){
                Q.push(pii(ncos, nn));
                cop[nn] = ncos;

//                cout << nn << ' ' << ncos << '\n';
            }
        }
    }

    if(id == 1)
        for(int i = 1 ; i <= N ; i++)
            B[i] = cop[i];
    else if(id == 2)
        for(int i = 1 ; i <= N ; i++)
            C[i] = cop[i];
    else
        for(int i = 1 ; i <= N ; i++)
            Ni[i] = cop[i];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("001.in", "r", stdin);
//    freopen("0011.out", "w", stdout);

    while(cin >> N >> Bar >> Charl >> Nito >> M && N != -1){
        int a, b, c;
        for(int i = 0 ; i < M ; i++){
            cin >> a >> b >> c;

            ad[a].push_back(pii(c, b));
            ad[b].push_back(pii(c, a));
        }

        Dijks(Bar, 1);
        Dijks(Charl, 2);
        Dijks(Nito, 3);

        int md = 0;

        for(int i = 1 ; i <= N ; i++)
            if(B[i] == C[Bar] - C[i]
               && B[i] == Ni[Bar] - Ni[i])
               md = max(md, B[i]);

        cout << md << ' ' << C[Bar] - md << ' ' << Ni[Bar] - md << '\n';

        for(int i = 1 ; i <= N ; i++)
            ad[i].clear();
    }
    return 0;
}
