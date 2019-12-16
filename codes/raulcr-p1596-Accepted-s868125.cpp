#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e7 + 1;
const int MOD = 1e9;

int T, N;
int fib[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fib[2] = fib[1] = 1;
    for(int i = 3 ; i < MAXN ; i++)
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;

    cin >> T;

    while(T--){
        cin >> N;

        int k = 9 - log10(fib[N]);

        while(k--)
            cout << 0;

        cout << fib[N] << '\n';
    }

    return 0;
}
