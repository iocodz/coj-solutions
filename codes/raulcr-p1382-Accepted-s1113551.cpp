#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e6 + 1;
const int MOD = 1000007;

LL xBIT[MAXN];
LL TA[MAXN];

int main()
{
    //ios::sync_with_stdio();
    //cin.tie(0);
    //cout.tie(0);

    for (LL i = 1LL ; i < MAXN ; i++)
        xBIT[i] = (i * i * i);
    for(int i = 1LL ; i < MAXN ; i++)
        TA[i] = (TA[i - 1] + xBIT[i]) % MOD;

    int N;
    cin >> N;

    while(N--){
        LL xx, yy; cin >> xx >> yy;

        int x = lower_bound(xBIT, xBIT + MAXN, xx) - xBIT;
        int y = upper_bound(xBIT, xBIT + MAXN, yy) - xBIT;

        cout << ((TA[y - 1] - TA[x - 1]) + MOD) % MOD<< '\n';
    }

    return 0;
}
