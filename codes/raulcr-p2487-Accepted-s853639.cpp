#include <bits/stdc++.h>

using namespace std;

const int MAXN = 12890;
const int MAXM = 3405;

int N, P;
int dp[MAXN];
int w[MAXM], d[MAXM];

int main()
{
//    freopen("charm.in", "r", stdin);
//    freopen("charm.out", "w", stdout);

    cin >> N >> P;

    for(int i = 1 ; i <= N ; i++)
        cin >> w[i] >> d[i];

    for(int i = 1 ; i <= N ; i++)
        for(int j = P ; j >= w[i] ; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + d[i]);

    cout << dp[P];
    return 0;
}

