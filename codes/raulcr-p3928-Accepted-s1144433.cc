#include <bits/stdc++.h>

using namespace std;

typedef pair<long long, long long> pii;
typedef pair<long long, pii> piii;

const long long MAXN = 1e5 + 1;

long long DS[MAXN], N, M, sf, sd;
bool mk[MAXN];
vector<pii> ad[MAXN];
vector<piii> kr;

long long busca(long long x){
    if(x == DS[x])
        return x;
    long long bus = busca(DS[x]);
    DS[x] = bus;
    return bus;
}

void une(long long a,long long b){
    DS[busca(b)] = busca(DS[a]);
}

void inic(){
    for(long long i = 1 ; i < MAXN ; i++)
        DS[i] = i;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    inic();

    cin >> N >> M >> sf >> sd;
    for(long long i = 1 ; i <= M ; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        kr.push_back(piii(c, pii(a, b)));
    }

    sort(kr.begin(), kr.end());
    long long mina;
    for(long long i = kr.size() - 1 ; i >= 0  ; i--){
        long long e1 = kr[i].second.first;
        long long e2 = kr[i].second.second;
        if(busca(e1) != busca(e2)){
            une(e1,e2);
        }
        if(busca(sd) == busca(sf)){
            mina = 2 * kr[i].first;
            break;
        }
    }

    for(long long i = 0 ; i < kr.size() ; i++){
        long long d = kr[i].first;
        if(d >= mina) d = 0;
        else
            d = abs(mina - d);
        ad[kr[i].second.first].push_back(pii(kr[i].second.second, d));
        ad[kr[i].second.second].push_back(pii(kr[i].second.first, d));
    }

    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Q.push(pii(0, sf));
    mk[sf] = 1;
    while(!Q.empty()){
        long long nod = Q.top().second;
        long long c = Q.top().first;
        Q.pop();
        
        mk[nod] = 1;

        if(nod == sd){
            cout << mina / 2 << ' ' << c << '\n';
            return 0;
        }

        for(long long i = 0 ; i < ad[nod].size() ; i++){
            long long nn = ad[nod][i].first;
            long long nc = ad[nod][i].second;

            if(mk[nn]) continue;
            Q.push(pii(c + nc, nn));
        }
    }
}
