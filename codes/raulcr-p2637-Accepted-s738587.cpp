#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long i64;

const int MAXN = 100001;

int T;
int N, Q;
i64 TA[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("a.in", "r", stdin);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> T >> Q;

        for(int i = 1 ; i <= T ; i++){
            cin >> TA[i];
            TA[i] += TA[i - 1];
        }

        for(int i = 1 ; i <= Q ; i++){
            int a, b;
            cin >> a >> b;
            a++;
            b++;
            cout << TA[b] - TA[a - 1] << '\n';
        }
        memset(TA, 0, sizeof(TA));
        if(i != N)
            cout << '\n';
    }
    return 0;
}
