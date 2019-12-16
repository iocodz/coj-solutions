///by taskkill
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 201;

int T, N;
int d[MAXN][MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    for(int c = 1 ; c <= T ; c++){
        cin >> N;

        for(int i = 1 ; i <= N ; i++)
            for(int j = 1 ; j <= i ; j++){
                cin >> d[i][j];
                d[i][j] += max(d[i - 1][j], d[i - 1][j - 1]);
            }

        for(int i = 1 ; i < N ; i++)
            for(int j = 1 ; j <= N - i ; j++){
                cin >> d[N + i][j];
                d[N + i][j] += max(d[N + i - 1][j], d[N + i - 1][j + 1]);
            }

        cout << "Case " << c << ": " << d[2 * N - 1][1] << '\n';
    }
    return 0;
}
