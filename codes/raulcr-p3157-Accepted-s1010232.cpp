#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;

typedef long long LL;

int N;
LL dp[2][MAXN], sol;

void solve(){
    cin >> N;

    //for(int i = 1 ; i <= N ; i++){
        string a; cin >> a;
        a = ' ' + a;

        for(int j = 1 ; j < a.size() ; j++)
            dp[0][j] = dp[0][j - 1] + (a[j] == 'C');
        for(int j = a.size() - 1 ; j >= 1 ; j--)
            dp[1][j] = dp[1][j + 1] + (a[j] == 'W');

        for(int j = 1 ; j < a.size() ; j++)
            if(a[j] == 'O')
                sol += dp[0][j - 1] * dp[1][j + 1];
        memset(dp, 0LL, sizeof(dp));
        cout << sol << '\n';
        sol = 0;
    //}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
