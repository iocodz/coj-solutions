#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 101;

int N, a[MAXN][MAXN], dp[MAXN][MAXN];
pii p[MAXN][MAXN];

inline int cuadr(int a){
    return a * a;
}

void solve(){
    cin >> N;
    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= i ; j++){
            cin >> a[i][j];
            a[i][j] = cuadr(a[i][j]);
        }
    dp[1][1] = a[1][1];
    p[1][1] = pii(0, 0);
    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= i ; j++){
            if(i != j && dp[i - 1][j] + a[i][j] > dp[i][j]){
                dp[i][j] = dp[i - 1][j] + a[i][j];
                p[i][j] = pii(i - 1, j);
            }
            if(j > 1 && dp[i - 1][j - 1] + a[i][j] > dp[i][j]){
                dp[i][j] = dp[i - 1][j - 1] + a[i][j];
                p[i][j] = pii(i - 1, j - 1);
            }
        }
    pii c = pii(N, N);
    for(int i = N ; i >= 1 ; i--)
        if(dp[c.first][c.second] < dp[N][i])
            c = pii(N, i);

    int sol1, sol2;
    sol1 = sol2 = 0;
    bool f = false;
    while(1){
        sol2 += a[c.first][c.second];
        sol1 += sqrt(a[c.first][c.second]);
        c = p[c.first][c.second];
        if(f)
            break;
        if(p[c.first][c.second].first == 0 || p[c.first][c.second].second == 0)
            f = true;
    }

    cout << sol2 << ' ' << sol1 << '\n';

    char a = (sol2 % 26) + 'a';
    char b = (sol1 % 26) + 'a';

    cout << a << b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    //cout << log2(1e9);
    return 0;
}
