#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, N;
    cin >> N;
    while(N--){ cin >> a >> b >> c; if(a + b == c || a -b == c || a * b == c || (b && a % b == c)|| (b && a / b == c)) cout << "YES\n"; else cout << "NO\n";}

    return 0;
}
