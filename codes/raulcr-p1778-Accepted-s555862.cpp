///by r@ul!

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cas;
    cin >> cas;

    while (cas--){
        double a, b, c;
        cin >> a >> b;

        c = ((a * b) * 3) / 16;
        printf("%.8lf\n", c);

    }
    return 0;
}
