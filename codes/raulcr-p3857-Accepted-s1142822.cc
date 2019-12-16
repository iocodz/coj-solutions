#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;
const int MOD = 1000000007;

long long n, dp[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dp[0] = 1LL;
    dp[1] = 0LL;
    dp[2] = 1LL;

    for(int i = 3 ; i < MAXN ; i++){
        dp[i] = ((dp[i - 1] + dp[i - 2]) * (i - 1)) % MOD;
    }

    cin >> n;
    while(n--){
        int a; cin >> a;
        cout << dp[a] << '\n';
    }
}
