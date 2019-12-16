#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2001;

int T, N, M, K;
int a[MAXN][MAXN];

bool ok(int l){
    for(int i = l ; i <= N ; i++)
        for(int j = l ; j <= N ; j++){
            int op = a[i][j] - a[i - l][j] - a[i][j - l] + a[i - l][j - l];

            if(op <= K)
                return true;
        }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N >> M >> K;

        for(int i = 1 ; i <= M ; i++){
            int b, c;
            cin >> b >> c;

            a[b][c] = 1;
        }


        for(int i = 1 ; i <= N ; i++)
            for(int j = 1 ; j <= N ; j++)
                a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];

        int beg = 1, end = N, sol = 0;
        while(end - beg > 3){
            int mt = (beg + end) / 2;

            if(ok(mt))
                beg = mt;
            else
                end = mt - 1;
        }

        for( ; beg <= end ; beg++)
            if(ok(beg))
                sol = beg;

        cout << sol * sol << '\n';

        memset(a, 0, sizeof a);
    }
    return 0;
}
