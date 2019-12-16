#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int N;
LL dp[3];

void solve(){
    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        string a; cin >> a;
        a = ' ' + a;
        for(int j = 1 ; j < a.size() ; j++){
            if(a[j] == 'C')
                dp[0]++;
            if(a[j] == 'A')
                dp[1] += dp[0];
            if(a[j] == 'T')
                dp[2] += dp[1];
        }
        cout << dp[2] << '\n';
	dp[0] = dp[1] = dp[2] = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
