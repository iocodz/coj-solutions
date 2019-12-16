#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e6 + 1;
const LL MOD = 1e9 + 7;

int M;
LL t[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(LL i = 1 ; i < MAXN ; i++)
        t[i] = (t[i - 1] + ((i * i) % MOD)) % MOD;

    while(cin >> M)
        cout << t[M] << '\n';

    return 0;
}
