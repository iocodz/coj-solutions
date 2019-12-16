#include <bits/stdc++.h>

using namespace std;

long long a, b, sol, n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;

    n = a + b - 1;

    sol = n * (n + 1) / 2;

    n = abs(a - b);

    sol = sol - (n * (n + 1) / 2);

    cout << sol;

    return 0;
}
