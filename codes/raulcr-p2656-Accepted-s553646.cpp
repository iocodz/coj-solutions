///by r@ul!

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, ar, p, x, y;
    cin >> a >> b;
    p = a + 4;
    ar = a + b;
    x = ((p / 2) + sqrt(p * p - 16 * ar) / 2) / 2;
    y = (p / 2) - x;
    cout << x << " " << y;
    return 0;
}
