#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 1;

int N, M;
string A, B;
int dp[MAXN][11];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> A >> B;

    for(int i = 0 ; i <= M ; i++)
        dp[i][0] = 1;

    for(int i = 1 ; i <= M ; i++)
        for(int j = 1 ; j <= N ; j++){
            dp[i][j] = dp[i - 1][j];

            if(A[j - 1] == B[i - 1])
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
        }

    cout << dp[M][N];

    return 0;
}
