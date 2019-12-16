#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int c1 = 0, c2 = 0, c3 = 0;

int main()
{
    //freopen("1.txt", "r", stdin);
    string sol = "";
    string a;
    cin >> a;
    for (int i = 0 ; i < a.length() ; i++){
        if (a[i] == '1')
            c1++;
        if (a[i] == '2')
            c2++;
        if (a[i] == '3')
            c3++;
    }
    if (c1 > 0)
        for ( ; c1 > 0 ; c1--)
            sol += "1+";
    if (c2 > 0)
        for ( ; c2 > 0 ; c2--)
            sol += "2+";
    if (c3 > 0)
        for ( ; c3 > 0 ; c3--)
            sol += "3+";
    cout << sol.substr(0, sol.size() - 1);
    return 0;
}
