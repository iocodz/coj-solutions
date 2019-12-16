#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int N, M, T;
int dp[51][1001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N >> M;

        dp[0][0] = dp[1][0] = 1;

        for(int i = 1 ; i < N ; i++)
            for(int j = M ; j >= 1 ; j--)
                for(int l = 0 ; l < N ; l++)
                    dp[j][(i + l) % N] = (dp[j - 1][l] + dp[j][(i + l) % N]) % MOD;

        cout << dp[M][0] << '\n';

        memset(dp, 0, sizeof dp);
    }
    return 0;
}
