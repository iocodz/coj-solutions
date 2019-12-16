#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e4;
const int MAXN = 1e6 + 2;

int N, U, Q;
int TA[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    cin >> N >> U >> Q;

    for(int i = 1 ; i <= U ; i++){
        int a, b;
        cin >> a >> b;
        if(a - 1 >= 1)
            TA[a - 1] += b;
        if(a + 1 <= N)
            TA[a + 1] += b;
        TA[a] += b + 1;
    }

    for(int i = 1 ; i <= N ; i++)
        TA[i] = (TA[i] + TA[i - 1]) % MOD;

    for(int i = 1 ; i <= Q ; i++){
        int a, b;
        cin >> a >> b;
        cout << (TA[b] - TA[a - 1] + MOD) % MOD << '\n';
    }


    return 0;
}