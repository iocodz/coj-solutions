#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int axx, pa, pj, g, a, ta, tr, ult = 0, factor;
    string name, t;
    cin >> axx;
    while (axx > 0){
        cin >> name >> pa >> pj >> g >> a >> ta >> tr;
        factor = log10(pa) + pj + 2 * g + a - (ta + 2 * tr);
        if (factor > ult){
            ult = factor;
            t = name;
        }
        axx--;
    }
    cout << t;
    return 0;
}
