#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull D, cd, V;

int main()
{
    cin >> D >> V;

    if((V - 3) % 2 == 0)
        cd = V * ((V - 3) / 2);

    else
        cd = (V * (V - 3)) / 2;

    if(cd == D)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
