//IOI, 1994
#include <iostream>
#include <cstdio>

using namespace std;

const int MAXN = 351;
bool T[MAXN][MAXN];
int N, K, P[MAXN][MAXN], M[MAXN][MAXN];

int main()
{
    //freopen("bowl.8.in", "r", stdin);
    //freopen("bowl.out", "w", stdout);

    cin >> K;
    while(K--){
        cin >> N;

        for (int i = 1 ; i <= N ; i++)
            for (int j = 1 ; j <= i ; j++){
                cin >> M[i][j];
                P[i][j] = M[i][j];
            }

        for (int i = N ; i >= 1 ; i--)
            for (int j = 1 ; j <= i ; j++){
                if(!T[i - 1][j]){
                    M[i - 1][j] += M[i][j];
                    T[i - 1][j] = 1;
                }

                else if (M[i][j] + P[i - 1][j] > M[i - 1][j])
                    M[i - 1][j] = M[i][j] + P[i - 1][j];

                if(!T[i - 1][j - 1]){
                    M[i - 1][j - 1] += M[i][j];
                    T[i - 1][j - 1] = 1;
                }

                else if (M[i][j] + P[i - 1][j - 1] > M[i - 1][j - 1])
                    M[i - 1][j - 1] = M[i][j] + P[i - 1][j - 1];
            }

        cout << M[1][1] << '\n';

        for (int i = N ; i >= 1 ; i--)
            for (int j = 1 ; j <= i ; j++)
                M[i][j] = T[i][j] = 0;

    }
    return 0;
}
