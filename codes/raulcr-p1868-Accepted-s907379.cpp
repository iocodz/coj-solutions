#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef pair<int, int> pii;

const int MAXN = 21;
const int MAXM = (1 << 16);
const int  MAX = (1 << 30);

int T, N, M, c = 1, sol = MAX;
char m[MAXN][MAXN];
bool mk[MAXM][MAXN];
int d[MAXN][MAXN];
int dp[MAXM][MAXN];
pii loc[MAXN];

int dst(pii a, pii b){
    return max(abs(a.x - b.x), abs(a.y - b.y));
}

int g(int msk, int e){
    if(mk[msk][e])
        return dp[msk][e];

    int r = MAX;
    int k = msk ^ (1 << e);

    for(int i = 0 ; i <= c ; i++)
        if((1 << i) & k)
            r = min(r, g(k, i) + d[e][i]);

    mk[msk][e] = true;

    return dp[msk][e] = r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    for(int t = 1 ; t <= T ; t++){
        cin >> N >> M;
        for(int i = 1 ; i <= N ; i++){
            cin >> m[i];
            for(int j = 1 ; j <= M ; j++){
                d[i][j] = d[j][i] = 0;

                if(m[i][j - 1] == 'x')
                    loc[0] = pii(i, j);

                else if(m[i][j - 1] == 'g')
                    loc[c++] = pii(i, j);
            }
        }

        c--;

        for(int i = 0 ; i <= c ; i++){
            d[i][i] = 0;
            for(int j = i + 1 ; j <= c ; j++)
                d[i][j] = d[j][i] = dst(loc[i], loc[j]);
        }

        memset(mk, 0, sizeof mk);
        memset(dp, 0, sizeof dp);

        mk[1][0] = true;

        for(int i = 0 ; i <= c ; i++)
            sol = min(g((1 << (c + 1)) - 1, i) + d[i][0], sol);

        cout << "Case " << t << ": " << sol << '\n';

        c = 1; sol = MAX;
    }
    return 0;
}
