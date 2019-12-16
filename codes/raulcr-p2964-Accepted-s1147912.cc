#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2001;

int N, dp[MAXN][MAXN], A[MAXN][MAXN], sol;

int main()
{
    cin >> N;
    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= N ; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 1 ; i < N ; i++){
        for(int j = 1 ; j < N ; j++){
            if(A[i][j] == A[i + 1][j + 1] && A[i + 1][j] == A[i][j + 1] && A[i][j] != A[i][j + 1]){
            dp[i][j] = 2;
            sol = 2;
            }
        }
    }
    bool flag = 1;
    while(flag){
        flag = 0;
        for(int i = 1 ; i <= N - sol + 1 ; i++){
            for(int j = 1 ; j <= N - sol + 1 ; j++){
                if(dp[i][j] == 0) continue;
                if(dp[i][j] == dp[i][j + 1] && dp[i + 1][j] == dp[i][j] && dp[i][j] == dp[i + 1][j + 1]){
                    dp[i][j]++;
                    if(sol < dp[i][j])
                        sol = dp[i][j];
                    flag = 1;
                }
            }
        }
    }

    cout << sol;

    return 0;
}
