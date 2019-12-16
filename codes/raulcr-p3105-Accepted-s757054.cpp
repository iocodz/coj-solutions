#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e6 + 1;
const LL MOD = 1e9 + 7;

int N, a, b;

LL dp[MAXN];

int main()
{
    cin >> N >> a >> b;

    dp[0] = 1;
    for(int i = 0 ; i <= N ; i++){
        if(i + a <= N)
            dp[i + a] = (dp[i] + dp[i + a]) % MOD;
        if(i + b <= N)
            dp[i + b] = (dp[i] + dp[i + b]) % MOD;
    }

    cout << dp[N];
    return 0;
}
