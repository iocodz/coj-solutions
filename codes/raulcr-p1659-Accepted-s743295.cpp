#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 501;
const int oo = MAXN * 7e5 + 1;

int N, M, Co, T, S;
int Ub[101];

bool mk[MAXN];

vector<pii> adlist[MAXN];
vector<int> sol;

void Dijkstra(){
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Q.push(make_pair(0, 1));

    vector<int> Cost(N + 1, oo);
    Cost[1] = 0;

    while(!Q.empty()){
        int n = Q.top().second;
        int c = Q.top().first;

        Q.pop();

        if(mk[n])
            continue;

        mk[n] = true;

        for(int i = 0 ; i < adlist[n].size() ; i++){
            int nn = adlist[n][i].first;
            int nc = adlist[n][i].second + c;

            if(Cost[nn] > nc){
                Cost[nn] = nc;
                Q.push(make_pair(nc, nn));
            }
        }
    }

    for(int i = 1 ; i <= Co ; i++){
        if(Cost[Ub[i]] <= T){
            sol.push_back(i);
            S++;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("alibi.in", "r", stdin);
    //freopen("alibi.out", "w", stdout);

    cin >> N >> M >> Co >> T;

    for(int i = 1 ; i <= M ; i++){
        int a, b, c;
        cin >> a >> b >> c;

        adlist[a].push_back(make_pair(b, c));
        adlist[b].push_back(make_pair(a, c));
    }

    for(int i = 1 ; i <= Co ; i++)
        cin >> Ub[i];

    Dijkstra();

    cout << S << '\n';

    for(int i = 0 ; i < sol.size() ; i++)
        cout << sol[i] << '\n';
    return 0;
}
