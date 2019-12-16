///by r@ul!

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

const double PI = 3.141592653589793;

int main()
{
    double l,areac, arc, art, as;
    while(cin >> l){
        areac = pow(l, 2);
        arc = PI * ((l / 3) * (l / 3));
        art = (l / 3) * (l / 2) / 2;
        as = areac - arc - art * 4;
        printf("%.4lf\n", as);
    }
    return 0;
}
