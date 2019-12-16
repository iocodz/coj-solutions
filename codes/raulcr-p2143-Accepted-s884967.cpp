#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int N, M, K, sol;
int dp[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M >> K;

        for(int i = 1 ; i <= M ; i++){
            int a, b;
            cin >> a >> b;

            for(int j = K ; j >= a ; j--)
                dp[j] = max(dp[j], dp[j - a] + b);
        }

        sol += dp[K];

        fill(dp, dp + MAXN, 0);
    }

    cout << sol;
    return 0;
}
