#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main()
{
    cin >> a >> b >> c;

    if(a + b + c != 180)
        cout << "Error";
    else if(a == b && b == c)
        cout << "Equilateral";
    else if(a == b || a == c || b == c)
        cout << "Isosceles";
    else if(a != b && b != c)
        cout << "Scalene";
    else
        cout << "Error";
    return 0;
}
