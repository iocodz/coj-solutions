#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    double a, b, c = 0, k;
    cin >> a;
    b = a;
    while (a--){
        cin >> k;
        c += k;
    }
    printf("%.2lf", c / b);
    return 0;
}
