#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e6 + 1;

int N;
LL dp[MAXN];

void solve(){
    cin >> N;
    dp[0] = 1;
    for(LL i = 1 ; i < MAXN ; i++)
        dp[i] = dp[i - 1] + i;
    for(int i = 1 ; i <= N ; i++){
        int a; cin >> a;
        cout << dp[a] << '\n';
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    //cout << log2(1e9);
    return 0;
}
