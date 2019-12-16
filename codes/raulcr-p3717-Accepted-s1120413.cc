#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e6 + 5;

int n, ok[MAX], lista[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> lista[i];
    ok[n + 1] = 1;
    for(int i = n - 1; i >= 1; i--) {
        if(i + lista[i] + 1 <= n + 1 && ok[i + lista[i] + 1])
            ok[i] = 1;
    }
    for(int i = 1; i <= n + 1; i++)
        if(ok[i]) {
            cout << i - 1 << "\n";
        }
}