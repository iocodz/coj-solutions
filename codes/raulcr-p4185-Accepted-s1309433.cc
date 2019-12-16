#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e6 + 5;

ll dp[MAX];
int arr[MAX];

int main()
{
    ll N;

    scanf("%d\n", &N);

    for(ll i = 1; i <= N; i++){
        scanf("%d", &arr[i]);
    }

    dp[1] = arr[1];

    for(ll i = 2; i <= N; i++){
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 1]);
    }

    cout <<dp[N] <<"\n";

    return 0;
}
