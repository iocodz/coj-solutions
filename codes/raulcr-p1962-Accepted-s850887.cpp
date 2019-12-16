#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5001;
const int MAXM = 100001;
const int oo = 1 << 30;

int M, N;
int dp[MAXN];
int c[MAXM];
int cow[MAXN];

int main()
{
    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++){
        cin >> cow[i];
        dp[i] = oo;
    }

    sort(cow + 1, cow + 1 + N);

    for(int i = 1 ; i <= M ; i++)
        cin >> c[i];

    for(int i = M - 1 ; i >= 1 ; i--)
        c[i] = min(c[i], c[i + 1]);

    dp[1] = c[1];

    for(int i = 2 ; i <= N ; i++)
        for(int j = 1 ; j <= i ; j++)
            dp[i] = min(dp[i], dp[j - 1] + c[cow[i] - cow[j] + 1]);

    cout << dp[N];

    return 0;
}


