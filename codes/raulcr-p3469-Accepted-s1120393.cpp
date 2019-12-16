#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAX = 1e5 + 5;

int n, q, a, lista[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> lista[i], lista[i] += lista[i-1];

    cin >> q;
    while(q--) {
        cin >> a;
        int pos = lower_bound(lista + 1, lista + n + 1, a) - lista;
        if(pos > n) {
            cout << "none\n";
        }
        else
        cout << pos << "\n";
    }

    return 0;
}
