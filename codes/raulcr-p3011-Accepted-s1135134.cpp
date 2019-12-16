#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1250;
int N, M, dp[MAXN][20];
vector<int> prime;
bool mk[MAXN];

void build_criba(){
    prime.push_back(2);
//    dp[2][1] = 1;
    mk[1] = 1;
    for(int i = 4 ; i < MAXN ; i+=2)
        mk[i] = 1;
    for(int i = 3 ; i < MAXN ; i+=2){
        if(!mk[i]){
            prime.push_back(i);
//            dp[i][1] = 1;
            for(int j = i * i ; j < MAXN ; j += i)
                mk[j] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    build_criba();

    dp[0][0] = 1;
    for(int j = 0 ; j < prime.size() ; j++){
        for(int i = 1120 ; i >= prime[j] ; i--){
            for(int k = 1 ; k <= 14 ; k++){
                if(dp[i - prime[j]][k - 1])
                    dp[i][k] += dp[i - prime[j]][k - 1];
            }
        }
    }

    while(cin >> N >> M && (N && M)){
        cout << dp[N][M] << '\n';
    }
    return 0;
}
