#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 15;

double n, m;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    cout << setprecision(5) << fixed;
    cout << max(min(n, m) * 0.5, max(min(n / 3, m), min(n, m / 3))) + 1e-6 << "\n";
}
