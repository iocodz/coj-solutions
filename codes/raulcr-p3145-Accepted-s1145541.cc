#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 5;

int N, M;
int mn[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    mn[0] = 0;
    for(int i = 1 ; i <= N ; i++){
        int a; cin >> a;
        mn[i] = mn[i - 1] + a;
    }
    mn[0] = 1;
    while(M--){
        int a; cin >> a;
        int k = upper_bound(mn + 1, mn + 1 + N, a) - mn;
        cout << k << '\n';
    }
    return 0;
}
