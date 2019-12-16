#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e4;
const int MAXN = 1e6 + 2;

int N, U, Q;
int Tree[MAXN];

void update(int pos, int val){
    for(int i = pos; i <= N; i += (i & -i))
        Tree[i] = (Tree[i] + val) % MOD;
}

int ABI(int pos){
    int sum = 0;
    for(int i = pos ; i > 0 ; i -= (i & -i))
        sum = (Tree[i] + sum) % MOD;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("a.in", "r", stdin);

    cin >> N >> U >> Q;

    for(int i = 1 ; i <= U + Q ; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1){
            if(b - 1 >= 1)
                update(b - 1, c);
            if(b + 1 <= N)
                update(b + 1, c);
            update(b, c * 2);
        }
        else
            cout << (ABI(c) - ABI(b - 1) + MOD) % MOD << '\n';
    }

    return 0;
}
