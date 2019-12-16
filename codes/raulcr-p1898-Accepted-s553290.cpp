///by r@ul!

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double va, vb, d, p;
    int cc;
    cin >> cc;
    while(cc > 0){
        cin >> va >> vb >> d;
        p = d / (vb + va);
        printf("%.4lf\n", p);
        cc--;
    }
    return 0;
}
