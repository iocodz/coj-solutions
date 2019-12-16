#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;

const int MAX = 1e5 + 5;

struct par {
    int a, b;
    par() {}
    par(int a1, int b1) : a(a1), b(b1) {}
    bool operator < (const par &p) const {
        if(a == p.a)
            return b < p.b;
        return a < p.a;
    }
} lista[MAX];

int n, val[MAX], ord[MAX], abi[MAX];

int query(int pos) {
    int ret = 0;
    for(int i = pos; i > 0; i ^= i & -i)
        ret += abi[i];
    return ret;
}

void update(int pos) {
    for(int i = pos; i <= n; i += i & -i)
        abi[i]++;
}

ll solve() {
    memset(abi, 0, sizeof(abi));
    sort(lista + 1, lista + n + 1);
    for(int i = 1; i <= n; i++)
        val[i] = ord[i] = lista[i].b;
    sort(ord + 1, ord + n + 1);
    int tam = unique(ord + 1, ord + n + 1) - ord;
    for(int i = 1; i <= n; i++)
        val[i] = lower_bound(ord + 1, ord + n + 1, val[i]) - ord;
    ll ret = 0;
    for(int i = 1; i <= n; i++) {
        ret += (ll)(0ll + query(n) - query(val[i]));
        update(val[i]);
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> lista[i].a >> lista[i].b;

    ll sol1 = solve();
    for(int i = 1; i <= n; i++)
        swap(lista[i].a, lista[i].b);
    ll sol2 = solve();

    cout << min(sol1, sol2) << "\n";
}