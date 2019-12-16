#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1005;

int l, a, x1, x2, Y1, Y2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> a >> x1 >> Y1 >> x2 >> Y2;
    if(x1 == x2) {
        cout << "0 " << Y1 << " " << l << " " << Y2 << "\n";
    }
    else
        cout << x1 << " 0 " << x2 << " " << a << "\n";
}
/*
7 3 2 2 3 1
*/
