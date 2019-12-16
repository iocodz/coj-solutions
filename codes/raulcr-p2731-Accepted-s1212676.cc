#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        double c, areac, areas;
        cin >> c;

        areas = c * c;
        areac = c / 2.0;
        areac = (3.14159265359) * (areac * areac);

        cout.precision(2);
        cout << fixed;
        cout << areas - areac << '\n';
    }
    return 0;
}
