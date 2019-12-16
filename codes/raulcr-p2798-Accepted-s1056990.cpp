#include <bits/stdc++.h>

using namespace std;

typedef long long i64;

const int MAXN = 101;

i64 TP[MAXN][MAXN];
int M, N, Q;

void solve(){
    for(int i = 0; i < MAXN; i++)
        TP[i][0] = TP[i][i] = 1;

    for(int i = 1; i < MAXN; i++)
        for(int j = 1; j < i; j++)
            TP[i][j] = TP[i - 1][j - 1] + TP[i - 1][j];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    cin >> Q;
    while(Q--){
        cin >> M >> N;
        cout << M << ' ' << TP[N + 9][N] << '\n';
    }

    return 0;
}
