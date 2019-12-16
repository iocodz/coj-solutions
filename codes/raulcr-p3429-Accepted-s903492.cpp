#include <bits/stdc++.h>

using namespace std;

const long long MAXN = 1e6 + 1;
const long long MOD = 1e9 + 7;

long long N;
long long TA[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(long long i = 1 ; i < MAXN ; i++){
        TA[i] = TA[i - 1];
        if(i % 2 != 0)
            TA[i] = (TA[i] + (i * i)) % MOD;
    }

    while(cin >> N){
        cout << TA[N] << '\n';
    }

    return 0;
}
