#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

int N;
int c[] = {1, 3, 5, 6};

int main()
{
    cin >> N;

    for(int t = 1 ; t <= N ; t++){
        int a;
        cin >> a;

        int dp[a + 1];

        for(int j = 1 ; j <= a ; j++)
            dp[j] = 1e6 + 1;

        dp[0] = 0;
        for(int i = 0 ; i < 4 ; i++)
            for(int j = 0 ; j + c[i] <= a ; j++)
                if(dp[j + c[i]] > dp[j] + 1)
                    dp[j + c[i]] = dp[j] + 1;

        cout << "Case " << t << ": " << dp[a] << '\n';

    }

    return 0;
}
