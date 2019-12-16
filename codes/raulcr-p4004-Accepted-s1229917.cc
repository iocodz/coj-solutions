#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll dp[5];

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);


    int L; cin >> L;

    string A; cin >> A;

    A = " " + A;

    for(int i = 1; i <= L; i++){
        if(A[i] == 'p'){
            dp[3] += dp[2];
            dp[1] ++;
        }else if(A[i] =='a'){
            dp[4] += dp[3];
            dp[2] += dp[1];
        }
    }cout << dp[4] << "\n";


    return 0;
}

