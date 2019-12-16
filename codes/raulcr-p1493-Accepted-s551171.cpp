///by r@ul!

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

double PI = 3.14;

int main()
{
    string a;
    cin >> a;
    if(a == "circle"){
       double r, area;
       cin >> r;
       area = PI * (r * r);
       printf("%.2lf\n", area);
    }
    else if(a == "rhombus" || a == "triangle"){
       double d1, d2, area;
       cin >> d1 >> d2;
       area = (d1 * d2) / 2;
       printf("%.2lf\n", area);
    }
    return 0;
}
