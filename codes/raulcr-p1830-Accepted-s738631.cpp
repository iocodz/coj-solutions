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


    cin >> N >> U >> Q;

    for(int i = 1 ; i <= U ; i++){
        int a, b;
        cin >> a >> b;
        if(a - 1 >= 1)
            update(a - 1, b);
        if(a + 1 <= N)
            update(a + 1, b);
        update(a, b + 1);
    }

    for(int i = 1 ; i <= Q ; i++){
        int a, b;
        cin >> a >> b;
        cout << (ABI(b) - ABI(a - 1) + MOD) % MOD << '\n';
    }
    return 0;
}