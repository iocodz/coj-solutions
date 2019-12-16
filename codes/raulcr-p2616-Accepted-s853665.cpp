#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

int N;
int dp[MAXN];
int c[] = {1, 3, 5, 6};

int main()
{
    cin >> N;

    dp[0] = 1e6 + 1;
    for(int j = 1 ; j < MAXN ; j++)
        dp[j] = dp[j - 1];

    dp[0] = 0;
    for(int i = 0 ; i < 4 ; i++)
        for(int j = 0 ; j + c[i] < MAXN ; j++)
            if(dp[j + c[i]] > dp[j] + 1)
                dp[j + c[i]] = dp[j] + 1;

    for(int t = 1 ; t <= N ; t++){
        int a;
        cin >> a;

        cout << "Case " << t << ": " << dp[a] << '\n';

    }

    return 0;
}
