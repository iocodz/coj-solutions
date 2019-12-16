#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 20;
const ll mod = 1e9 + 7;

ll n, dp[1 << MAX], T[1 << MAX], c[1 << MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    memset(dp, -1, sizeof(dp));

    T[0] = 1;
    for(int i = 0; i < n; i++) {
        cin >> T[1 << i], dp[1 << i] = 0;
        c[1 << i] = 1;
    }

    for(int i = 1; i < (1 << n); i++) {
        c[i] = c[i & -i] + c[i ^ (i & -i)];
        T[i] = (T[i & -i] * T[i ^ (i & -i)]) % mod;
    }

//    for(int i = 1; i < (1 << n); i++)
//        T[i] = (T[i] * c[i]) % mod;

    for(int mask = 1; mask < (1 << n); mask++) {
        if(dp[mask] == -1)
            dp[mask] = 1e15;
        for(int sub = mask; sub != 0; sub = (sub - 1) & mask) {
            int mask2 = mask ^ sub;
            dp[mask] = min(dp[mask], dp[sub] + (T[sub] * c[sub]) + dp[mask2] + (T[mask2] * c[mask2]));
        }
    }

    cout << dp[(1 << n) - 1] << "\n";
}