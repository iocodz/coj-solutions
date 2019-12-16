#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e6 + 5;

map <int, int> m;

int t, n;

int F(int x) {
    if(x <= 0)
        return 0;
    int &aux = m[x];
    if(aux != 0)
        return aux;
//    if(x % 2) {
    aux = 1 + F(x / 2);
//    }
//    else {
//        int tmp = x / 2;
//        aux = 1 + F(tmp);
//    }
    return aux;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    m[1] = 1;
//    m[2] = 2;

    while(cin >> t) {
        while(t--) {
            cin >> n;
            cout << F(n) << "\n";
        }
    }
}
/*
3
1
1
1
*/
