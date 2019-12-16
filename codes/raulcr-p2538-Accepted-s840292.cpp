#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;
const int MOD = 1e9;

int N;
int A[MAXN];
int dp[MAXN][3];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> A[i];
        A[i] %= 3;
    }

    dp[0][0] = 1;
    for(int i = 1 ; i <= N ; i++)
        for(int j = 0 ; j < 3 ; j++)
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][(j + 3 - A[i]) % 3]) % MOD;

    cout << dp[N][0] - 1;

    return 0;
}
