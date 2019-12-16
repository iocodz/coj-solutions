#include <bits/stdc++.h>

using namespace std;

int main()
{
    string A;
    cin >> A;
    cout << A << ' ';
    int b, c;
    cin >> b >> c;
    cout << max(b, c) - min(b, c);
    return 0;
}
