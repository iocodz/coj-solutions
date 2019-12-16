#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;

//1000000000000000000

ll inv(ll n){
    ll p = MOD - 2ll;
    ll r = 1ll;

    while(p){
        if(p % 2ll) r = (r * n) %MOD;
        n = (n * n)%MOD;
        p /= 2ll;
    }

    return r % MOD;
}

ll x[10], y[10];
ll N;

ll lagrange1(ll v){
    ll p = 0;

    for(int i = 0; i < N; i++){
        ll L = 1;
        for(int j = 0; j < N; j++){
            if(i != j){
                L = L * ( ( (v - x[j])%MOD ) * inv( (x[i] - x[j] + MOD )%MOD ) % MOD)%MOD;
            }
        }
        p = (p + (y[i] * L)%MOD ) % MOD;
    }

    return p;
}

ll lagrange2(ll v){
    ll p = 0;

    for(int i = 0; i < N; i++){
        ll L = 1;
        for(int j = 0; j < N; j++){
            if(i != j){
                L = L * ( ( (v - x[j])%MOD ) * inv( (x[i] - x[j] + MOD )%MOD ) % MOD)%MOD;
            }
        }
        p = (p + (y[i] * L)%MOD ) % MOD;
    }

    return p;
}

ll dis(pair<int, int> a, pair<int, int > b){
    return (a.first - b.first)*(a.first - b.first) + (a.second - b.second)*(a.second - b.second);
}

ll bf(ll n){
    int sol = 0;
    vector< pair<int, int> > vec;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            vec.push_back( make_pair(i, j) );
        }
    }

    for(int i = 0; i < vec.size(); i++){
        for(int j = i+1; j < vec.size(); j++){
            for(int k = j+1; k < vec.size(); k++){
                for(int l = k+1; l < vec.size(); l++){
                    set<ll> loca;
                    pair<int, int> a, b, c, d;
                    a = vec[i];
                    b = vec[j];
                    c = vec[k];
                    d = vec[l];
                    loca.insert( dis(a, b) );
                    loca.insert( dis(a, c) );
                    loca.insert( dis(a, d) );
                    loca.insert( dis(b, c) );
                    loca.insert( dis(b, d) );
                    loca.insert( dis(c, d) );
                    sol += loca.size() == 2;
                }
            }
        }
    }

    return sol;

}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll n; cin >>n;

    N = 5;

        x[0] = 1; y[0] = bf(1);
        x[1] = 2; y[1] = bf(2);
        x[2] = 3; y[2] = bf(3);
        x[3] = 4; y[3] = bf(4);
        x[4] = 5; y[4] = bf(5);

    if(n <= 6){
        cout << bf(n) <<"\n";
    }else{
        cout <<lagrange1(n)%MOD <<"\n";
    }

    return 0;
}
