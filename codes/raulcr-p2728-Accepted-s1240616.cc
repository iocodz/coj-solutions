#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

map<ll, int> m1, m2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, n, x, mayor ;
    cin >> t;

    while(t--) {
        cin >> n;
        m2.clear();
        m1.clear();
mayor=0;
        while(n--) {
            cin >> x;

            if(x > mayor) mayor = x;

            if(m2.find(x) == m2.end()) m1[x] = 1;

            for(auto c : m2) {
                ll gc = __gcd(c.first, x);
                m1[gc] = max(m1[gc], c.second + 1);
                mayor = max(mayor, m1[gc] * gc);
            }

            m2 = m1;
            m1.clear();
        }

        cout << mayor << '\n';
    }

    return 0;
}
