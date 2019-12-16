#include <bits/stdc++.h>

using namespace std;

long long a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> a && a){
        int ra = sqrtl(a);
        int sol = 0;

        if(ra * ra >= a)
            sol = ra;
        else
            sol = ra + 1;

        cout << sol << '\n';
    }

    return 0;
}
