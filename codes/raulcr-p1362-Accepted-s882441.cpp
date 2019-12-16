#include <bits/stdc++.h>

using namespace std;

typedef long long i64;

i64 a, b, c;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> a >> b >> c){
        if(a == b && b == c && c == 0)
            break;
        if(c % __gcd(a, b) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
