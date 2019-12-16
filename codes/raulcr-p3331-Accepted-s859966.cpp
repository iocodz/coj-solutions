#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL a, b, s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> a >> b && (a && b)){
        s = 4 * (a * b - 4) +
                (2 * a + 2 * (b - 2) - 4) * (a * b - 6) +
                (a * b - (2 * a + 2 * (b - 2))) * (a * b - 9);

        cout <<  s << '\n';
    }

    return 0;
}
