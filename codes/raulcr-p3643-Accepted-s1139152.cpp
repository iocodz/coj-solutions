#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

int N, dp[MAXN];
vector<int> a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i = 1 ; (i * (i + 1) / 2) < MAXN ; i++)
        a.push_back(i * (i + 1) / 2);


    fill(dp, dp + MAXN, (1 << 30));

    dp[0] = 0;
    for(int j = 0 ; j < a.size() ; j++)
        for(int i = a[j] ; i < MAXN ; i++){
            if(dp[i - a[j]] + 1 < dp[i])
                dp[i] = dp[i - a[j]] + 1;
        }
    while(cin >> N)
        cout << dp[N] << '\n';
    return 0;
}
