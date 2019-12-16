#include <bits/stdc++.h>

using namespace std;

const int MAX = 105;

int f(int a, int b) {
    if(a == b)return 0;
    if(a < b)swap(a, b);
    if(b * 2 >= a)
        return 1;
    return 1 + f((a + 1) / 2, b);
}

int solve(int a, int b, int c, int d) {
    return f(a, c) + f(b, d);
}

int a, b, c, d;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c >> d;
    if(a < b)swap(a, b);
    if(c < d)swap(c, d);
    if(a < c || b < d)
        cout << "-1\n";
    else
        cout << min(solve(a, b, c, d), solve(a, b, d, c)) << "\n";
}