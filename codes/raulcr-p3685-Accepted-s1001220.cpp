#include <bits/stdc++.h>

using namespace std;

int T;

int main()
{cin.tie(0);
    cin >> T;
    while(T--){
        long long s, x; cin >> x;
        s = (x * x * 2) + (x * x) + 2;
        cout << s << '\n';
    }
    return 0;
}
