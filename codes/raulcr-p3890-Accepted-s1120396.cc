#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll sum(ll n) {
    return n * (n + 1) * (n * 2 + 1) / 6;
}

ll sum2(ll n) {
    return sum(n) + sum(n - 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    ll sq = 1;
    while(sq * sq * sq <= n * 6ll)sq++;
    for(; sq >= 1; sq--) {
        if(sum2(sq) <= n) {
//            cout << sq << " " << sum2(sq) << "\n";
            cout << sq << "\n";
            return 0;
        }
    }
}
