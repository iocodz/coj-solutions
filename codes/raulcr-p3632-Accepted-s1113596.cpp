#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e5 + 1;

int TA[MAXN][10], e[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    while(cin >> N){
        for(int i = 1 ; i <= N ; i++)
            cin >> e[i];

        for(int i = 1 ; i <= N ; i++){
            for(int j = 0 ; j <= 9 ; j++){
                TA[i][j] = TA[i - 1][j];
            }
            TA[i][e[i]]++;
        }

        int Q;
        cin >> Q;

        while(Q--){
            int x, y;
            cin >> x >> y;

            int sol = 0;
            for(int i = 0 ; i <= 9 ; i++){
                if(TA[y][i] - TA[x - 1][i] > 0)
                    sol++;
            }

            cout << sol << '\n';
        }

        for(int i = 1 ; i <= N ; i++)
            for(int j = 0 ; j <= 9 ; j++)
                TA[i][j] = 0;
    }

    return 0;
}
