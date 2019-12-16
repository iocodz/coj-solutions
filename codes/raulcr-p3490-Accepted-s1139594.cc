#include <bits/stdc++.h>

using namespace std;

long long A, B;

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> A >> B;
        cout << B - B / A << '\n';
    }
    return 0;
}
