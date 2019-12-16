#include <bits/stdc++.h>

using namespace std;

#define mx(a, b) ((a) > (b) ? (a) : (b))
#define mn(a, b) ((a) < (b) ? (a) : (b))

typedef long long LL;
typedef pair<LL, LL> pii;

const int MAXN = 1e5 + 1;
const int MAXM = 21;

int N, Q;
int lca[MAXN][MAXM], level[MAXN];
int costmax[MAXN][MAXM], costmin[MAXN][MAXM];
vector<pii> ad[MAXN];

void lca_build(){
    queue<int> Q;
    Q.push(1);
    level[1] = 1;

    while(!Q.empty()){
        int nod = Q.front();

        Q.pop();

        for(int i = 0 ; i < ad[nod].size() ; i++){
            int nn = ad[nod][i].first;
            int nc = ad[nod][i].second;

            if(level[nn]) continue;

            level[nn] = level[nod] + 1;
            lca[nn][0] = nod;
            costmax[nn][0] = nc;
            costmin[nn][0] = nc;

            Q.push(nn);

            int lg = log2(level[nn]);
            for(int k = 1 ; k <= lg ; k++)
                if(lca[nn][k - 1]){
                    lca[nn][k] = lca[lca[nn][k - 1]][k - 1];
                    costmax[nn][k] = mx(costmax[nn][k - 1], costmax[lca[nn][k - 1]][k - 1]);
                    costmin[nn][k] = mn(costmin[nn][k - 1], costmin[lca[nn][k - 1]][k - 1]);
                }
        }
    }
}

void lca_query(int a, int b){
    if(level[a] > level[b])
        swap(a, b);

    int ma, mi;
    ma = 0, mi = (1 << 30);

    int lg = log2(level[b]);
    for(int i = lg ; i >= 0 ; i--)
        if(level[b] - (1 << i) >= level[a] && lca[b][i]){
            mi = mn(mi, costmin[b][i]);
            ma = mx(ma, costmax[b][i]);
            b = lca[b][i];
        }

    if(a == b){
        cout << mi << ' ' << ma << '\n';
        return;
    }

    lg = log2(level[a]);
    for(int i = lg ; i >= 0 ; i--)
        if(lca[a][i] && lca[b][i] != lca[a][i]){
//            if(lca[b][i]){
            mi = mn(mi, costmin[b][i]);
            ma = mx(ma, costmax[b][i]);
//            }
            mi = mn(mi, costmin[a][i]);
            ma = mx(ma, costmax[a][i]);
            a = lca[a][i], b = lca[b][i];
        }

    cout << mn(mn(costmin[b][0], costmin[a][0]), mi) << ' ' << mx(mx(costmax[b][0], costmax[a][0]), ma) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1 ; i < N ; i++){
        int a, b, c; cin >> a >> b >> c;
        ad[a].push_back(pii(b, c));
        ad[b].push_back(pii(a, c));
    }

    lca_build();

    cin >> Q;
    while(Q--){
        int a, b; cin >> a >> b;
        lca_query(a, b);
    }
    return 0;
}
