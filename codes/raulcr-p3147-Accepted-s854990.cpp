#include <bits/stdc++.h>

using namespace std;

const int MAXN = 51;

int T, N;
int dp[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    for(int i = 1 ; i <= T ; i++){
        cin >> N;

        for(int j = 1 ; j <= N ; j++){
            cin >> dp[j];
            dp[j] += dp[j - 1];
        }

        bool flag = false;

        for(int j = 1 ; j <= N ; j++)
            for(int k = j ; k >= 1 ; k--){
                if(!(dp[j] - dp[k - 1])){
                    flag = true;
                    goto A;
                }
            }

        A:

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}