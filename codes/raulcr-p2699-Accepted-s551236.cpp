///by r@ul!

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cc = 30;
    double ud = 0, sum = 0, a;
    while(cc > 0){
        cin >> a;
        sum += a;
        cc--;
    }
    ud = sum / 30;
    sum += ud;
    printf("%.3lf", sum);
    return 0;
}
