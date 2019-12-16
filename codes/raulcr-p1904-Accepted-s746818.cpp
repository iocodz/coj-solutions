#include <bits/stdc++.h>

using namespace std;

const int MAXN = 4001;
const int MOD = 1e4;

int N, Q, U;
int Tree[MAXN][MAXN];

void update(int px, int py, int val){
    for(int i = px ; i <= N ; i += (i & -i))
        for(int j = py ; j <= N ; j += (j & -j))
            Tree[i][j] = (Tree[i][j] + val) % MOD;
}

int query(int x, int y){
    int sum = 0;
    for(int i = x ; i >= 1 ; i -= (i & -i))
        for(int j = y ; j >= 1 ; j -= (j & -j))
            sum = (sum + Tree[i][j]) % MOD;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    cin >> N >> U >> Q;

    for(int i = 0 ; i < U + Q ; i++){
        int a;
        cin >> a;
        if(a == 1){
            int r, c, k;
            cin >> r >> c >> k;
            update(r, c, k * 5);

            if(r + 1 <= N)
                update(r + 1, c, k * 3);
            if(r - 1 >= 1)
                update(r - 1, c, k * 3);
            if(c + 1 <= N)
                update(r, c + 1, k * 3);
            if(c - 1 >= 1)
                update(r, c - 1, k * 3);
            if((r + 1 <= N) && (c + 1 <= N))
                update(r + 1, c + 1, k * 2);
            if((r + 1 <= N) && (c - 1 >= 1))
                update(r + 1, c - 1, k * 2);
            if((r - 1 >= 1) && (c + 1 <= N))
                update(r - 1, c + 1, k * 2);
            if((r - 1 >= 1) && (c - 1 >= 1))
                update(r - 1, c - 1, k * 2);
        }
        else{
            int b, c, d;
            cin >> a >> b >> c >> d;
            int sol = (query(c, d) - query(a - 1, d) - query(c, b - 1) +  2 * MOD) % MOD;
            cout << (sol + query(a - 1, b - 1)) % MOD << '\n';
        }
    }
    return 0;
}
