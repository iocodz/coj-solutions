#include <bits/stdc++.h>

using namespace std;

const int MAXN = 748905;

int N;
int dp[MAXN];
int c[] = {1, 5, 10, 25, 50};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("revamp.in", "r", stdin);
//    freopen("revamp.out", "w", stdout);

    dp[0] = 1;
    for(int i = 0 ; i < 5 ; i++)
        for(int j = 0 ; j + c[i] < MAXN ; j++)
            dp[j + c[i]] += dp[j];

    while(cin >> N){
        cout << dp[N] << '\n';
    }


    return 0;
}

