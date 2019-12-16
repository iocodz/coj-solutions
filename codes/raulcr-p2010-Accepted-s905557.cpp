#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int N, M, K, sol;
int msk[MAXN][MAXN];
char m[MAXN][MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K;
    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++)
            cin >> m[i][j];

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++)
            for(int ii = i ; ii >= 1 ; ii--)
                for(int jj = j ; jj >= 1 ; jj--){
                    msk[ii][jj] = (1 << (m[ii][jj] - 'A'));
                    if(ii != i)
                        msk[ii][jj] |= msk[ii + 1][jj];
                    if(jj != j)
                        msk[ii][jj] |= msk[ii][jj + 1];
                    if(__builtin_popcount(msk[ii][jj]) == K)
                        sol++;
                }

    cout << sol;

    return 0;
}
