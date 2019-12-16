#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e6 + 1;

LL N, M, level[MAXN];

bool ok(LL k){
    LL c = 0LL, m = M;

    for(int i = 1 ; i <= N ; i++){
        c += level[i];
        if(c >= k){
            c = false;
            m--;
        }
    }

    return m <= 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for(LL i = 1LL ; i <= N ; i++)
        level[i] = i * 2LL - 1LL;

    LL i = 1LL, f = N * N, m;

    while(f - i > 6LL){
        m = (i + f) / 2LL;
        if(ok(m)) i = m;
        else f = m - 1LL;
    }

    while(!ok(f) && f >= i) f--;

    cout << f;

    return 0;
}

