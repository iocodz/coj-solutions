//By CRIOLLOS
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

long long sol, t[MAXN], N, M, a[MAXN], b[MAXN];


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++)
        cin >> a[i];

    for(int i = 1 ; i <= M ; i++){
        cin >> b[i];
    }

    sort(b + 1, b + M + 1);

    for(int i = 1 ; i <= M ; i++){
        t[i] = t[i - 1] + b[i];
    }

    for(int i = 1 ; i <= N ; i++){
        int pos = lower_bound(b + 1, b + 1 + M, a[i]) - b - 1;
        sol += ((a[i] * pos - t[pos]) + (t[M] - t[pos] - a[i] * (M - pos)));
    }

    cout << sol;

    return 0;
}
/*5 5
1 2 3 4 5
1 2 3 4 5*/
