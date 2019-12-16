#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 3;

int N;
int dp[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 2 ; i <= N + 1 ; i++){
        int a; cin >> a;
        dp[i] = max(dp[i - 1], dp[i - 2] + a);
    }

    cout << dp [N + 1];

    return 0;
}
