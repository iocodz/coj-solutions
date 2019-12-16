#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int sol;
int q[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    for(int i = 1 ; i <= t ; i++) cin >> q[i];
    sort(q + 1, q + 1 + t);
    for(int i = 1 ; i <= (t/2) + 1 ; i++){
        sol += (q[i] / 2 + 1);
    }

    cout << sol;
	return 0;
}
