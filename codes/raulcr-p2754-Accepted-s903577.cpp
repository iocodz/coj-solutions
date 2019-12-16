#include <bits/stdc++.h>

using namespace std;

int P[1 << 16];
int dp[1 << 16];

bool pal(const string &a){
    for(int i = 0, j = a.size() - 1; i <= j; i++, j--)
        if(a[i] != a[j])
            return 0;
    return 1;
}

int solve(int msk){

    if(!dp[msk]){
        int res = 20;

        for(int i = 1; i <= P[0]; i++){
            if((P[i] & msk) && ((P[i] & msk) == P[i])){
                int sol = solve(msk ^ P[i]);

                if(sol < res){
                    res = sol;
                }
            }
        }
        dp[msk] = res + 1;
    }
    return dp[msk];
}

int main(){
    string s;

    while(cin >> s){
        int N = s.size();
        P[0] = 0;
        memset(dp, 0, sizeof dp);
        for(int msk = 1; msk < (1 << N); msk++){
            string aux = "";
            for(int b = 0; b < N; b++)
                if(msk & (1 << b))
                   aux = aux + s[b];
            if(pal(aux)){
                P[++P[0]] = msk;
                dp[msk] = 1;
            }
        }

        dp[0] = 1;
        cout << solve((1 << N) - 1) <<'\n';
    }
    return 0;
}