#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 1;

int T, N, M, dp[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N >> M;

        int a, b;
        for(int i = 1 ; i <= M ; i++){
            cin >> a >> b;

            for(int j = 0 ; j + b <= N ; j++)
                dp[j + b] = max(dp[j] + a, dp[j + b]);
        }

        int sol = 0;
        for(int i = 1 ; i <= N ; i++){
            if(dp[i] > sol)
                sol = dp[i];
            dp[i] = false;
        }

        cout << sol << '\n';

    }
    return 0;
}
