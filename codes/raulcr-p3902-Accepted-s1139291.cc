#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define X real()
#define Y imag()

const int MAX = 1e5 + 5;
const int EPS = 0;

typedef complex <int> P;

int best(int a, int b) {
    int ret = 0;
    int c = a / b;
    int c2 = a / (2 * b);
    if(a - c2 * (2 * b) >= b)
        c2++;
    return c2;
}

int a, b, c, d;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c >> d;
    cout << best(a, c) * best(b, d) << "\n";
//    cout << best(a, c) << "\n";
//    cout << best(b, d) << "\n";
}
