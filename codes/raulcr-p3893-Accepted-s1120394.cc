#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 200005;

ll p, mark[MAX], prim[MAX], dp[MAX];

ll phi(ll n) {
    ll x = n, ret = 0;
    vector <int> v;
    for(ll i = 0; i < p && prim[i] * prim[i] <= n; i++) {
        ll d = prim[i];
        if(!(n % d)) {
            v.push_back(d);
            while(!(n % d))
                n /= d;
        }
    }
    if(n != 1)
        v.push_back(n);

    n = v.size();
    for(ll i = 1; i < (1 << n); i++) {
        ll c = 0, prod = 1;
        for(ll j = 0; j < n; j++)
            if(i & (1 << j))
                c++, prod *= v[j];
        if(c & 1)
            ret += x / prod;
        else
            ret -= x / prod;
    }

    return x - ret;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(ll i = 4; i < MAX; i += 2)
        mark[i] = true;
    for(ll i = 3; i * i < MAX; i += 2)
        if(!mark[i])
            for(ll j = i * i; j < MAX; j += i + i)
                mark[j] = true;
    prim[p++] = 2;
    for(ll i = 3; i < MAX; i += 2)
        if(!mark[i])
            prim[p++] = i;

    dp[0] = 1;
    for(ll i = 1; i < MAX; i++)
        dp[i] = dp[i - 1] + phi(i);

    ll n;
//    while(cin >> n) {
        cin >> n;
        if(n == 1) {
            cout << "0/1\n";
            return 0;
//            continue;
        }

        int p = lower_bound(dp, dp + MAX, n) - dp;
//    cout << --p << "\n";
//    --p;
        ll c = n - dp[p - 1], c2 = 0;
        for(int i = 1; i <= p; i++) {
            if(__gcd(i, p) == 1) {
                c2++;
                if(c == c2) {
                    cout << i << "/" << p << "\n";
//                    break;
                    return 0;
                }
            }
        }
//    }
}

/*
12038933449
12039065641
*/
