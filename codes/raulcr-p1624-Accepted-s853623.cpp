#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

string N;
int dp[MAXN];

bool pal(int i, int j){
    while(i <= j){
        if(N[i] != N[j])
            return 0;
        i++, j--;
    }
    return 1;
}

int main()
{
    cin >> N;

    N = " " + N;

//    dp[1] = 1;
    for(int i = 1 ; i < N.size() ; i++){
        dp[i] = 1e9 + 1;
        for(int j = i ; j >= 1 ; j--)
            if(dp[j - 1] + 1 < dp[i] && pal(j, i))
                dp[i] = dp[j - 1] + 1;
    }

    cout << dp[N.size() - 1];

    return 0;
}
