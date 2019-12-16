#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;
const int MOD = 1e9 + 7;

int T, N;
int dp[MAXN];//[2];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("binbin.in", "r", stdin);
//    freopen("binbin.out", "w", stdout);

    cin >> T;

    dp[0] = 1, dp[1] = 2;
    for(int i = 2 ; i <= MAXN ; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;

//    dp[0][0] = 1;
//    for(int i = 1 ; i < MAXN ; i++){
//        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % MOD;
//        dp[i][1] = dp[i - 1][0];
//    }
//
    while(T--){
        cin >> N;

        cout << (dp[N]) % MOD << '\n';
    }
    return 0;
}
