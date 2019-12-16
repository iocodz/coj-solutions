#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e5 + 5;
const int mod = 2010;

int n, k, lista[MAX], asc[MAX], desc[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for(int i = 2; i <= k + 1; i++)
        cin >> lista[i];

    lista[1] = lista[2] - 1;
    lista[k + 2] = lista[k + 1] - 1;

    k += 2;
    for(int i = 1; i <= k; i++) {
        if(lista[i] > n) {
            cout << "N\n";
            return 0;
        }
        int x = abs(lista[i] - lista[i - 1]);
        if(i != 1 && (x != 1 && x != 2)) {
            cout << "N\n";
            return 0;
        }
    }

    asc[1] = 1;
    for(int i = 2; i <= k; i++) {
        if(lista[i] > lista[i - 1])
            asc[i] = asc[i - 1];
    }
    desc[k] = 1;
    for(int i = k - 1; i >= 1; i--) {
        if(lista[i] > lista[i + 1])
            desc[i] = desc[i + 1];
    }

    for(int i = 2; i < k; i++) {
        if(lista[i] == 1) {
            if(i > 2 && lista[i - 1] == 2) {
                cout << "N\n";
                return 0;
            }
            if(i < k - 1 && lista[i + 1] == 2) {
                cout << "N\n";
                return 0;
            }
        }
    }

    for(int i = 2; i < k; i++) {
        int v1 = lista[i] - lista[i - 1];
        int v2 = lista[i] - lista[i + 1];
        if(v1 > v2)swap(v1, v2);
        bool ok = (v1 == 1 && v2 == 2);
        if(i == 2 && (lista[i] == lista[i + 1] + 1 || lista[i] == lista[i + 1] + 2))
            ok = true;
        if(i == k - 1 && (lista[i] == lista[i - 1] + 1 || lista[i] == lista[i - 1] + 2))
            ok = true;
        if(asc[i] && desc[i] && ok) {
            cout << "S\n";
            return 0;
        }
    }

    cout << "N\n";
}