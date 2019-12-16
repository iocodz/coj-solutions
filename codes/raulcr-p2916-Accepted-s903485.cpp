#include <bits/stdc++.h>

using namespace std;

int a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> a >> b){
        if(__gcd(a, b) == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
