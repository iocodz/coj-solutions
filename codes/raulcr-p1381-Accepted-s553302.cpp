///by r@ul!

#include <cstdio>
#include <iostream>

using namespace std;

typedef long long LL;

int main()
{
    int cc;
    cin >> cc;
    while(cc > 0){
          double d, v1, v2, vm, t;
          cin >> d >> v1 >> v2 >> vm;
          t = d / (v1 + v2) * vm;
          printf("%.2lf\n", t);
          cc--;
    }
    return 0;
}
