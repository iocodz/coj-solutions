#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define X real()
#define Y imag()

const int MAX = 2e5 + 5;
//const int MAX = 25 + 5;

typedef complex <ll> P;

int t, tam, n, sol, lista[MAX], abi[MAX], ord[MAX], dp1[MAX], dp2[MAX];

void update(int pos, int val) {
    for(int i = pos; i <= n; i += i & -i)
        abi[i] = max(abi[i], val);
}

int query(int pos) {
    int ret = 0;
    for(int i = pos; i > 0; i ^= i & -i)
        ret = max(ret, abi[i]);
    return ret;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> lista[i], ord[i] = lista[i];
        sort(ord + 1, ord + n + 1);

        tam = unique(ord + 1, ord + n + 1) - ord;

        memset(abi, 0, sizeof(abi));
        sol = 0;

        for(int i = 1; i <= n; i++)
            lista[i] = lower_bound(ord + 1, ord + tam + 1, lista[i]) - ord;

        for(int i = n; i >= 1; i--) {
            dp2[i] = 1;
            if(i != n && lista[i] < lista[i + 1])
                dp2[i] = dp2[i + 1] + 1;
        }

        for(int i = 1; i <= n; i++) {
            dp1[i] = 1;
            if(i > 1 && lista[i] > lista[i - 1])
                dp1[i] = dp1[i - 1] + 1;
            update(lista[i], dp1[i]);
            int tmp = dp2[i] + query(lista[i] - 1);
            sol = max(sol, tmp);
        }

        cout << sol << "\n";
    }
}