#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const LL MAXN = 1e5 + 1;

int N;
LL a[MAXN], ta[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> a[i];
        ta[i] = ta[i - 1] + a[i];
    }

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        int b, c;
        cin >> b >> c;

        cout << ta[max(b, c)] - ta[min(b, c) - 1] << '\n';
    }
    return 0;
}
