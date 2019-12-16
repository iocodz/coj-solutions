#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1001;
const int MOD = 1000009;

int N, M, K, T[MAXN][MAXN];
LL sol;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for(int i = 0 ; i < MAXN ; i++){
        T[i][0] = 1;
        for(int j = 1 ; j < i ; j++)
            T[i][j] = (T[i - 1][j] + T[i - 1][j - 1]) % MOD;
    }

    while(N--){
        cin >> M >> K;

        for(int i = M ; i >= K ; i--){
            sol += T[i][K - 1] * i % MOD;
            sol %= MOD;
        }
        cout << sol << '\n';
        sol = 0;
    }

    return 0;
}