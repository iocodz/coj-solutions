///by r@ul!

#include <string>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, cont = 1;
    while(cin >> a >> b >> c){
        cout << "Case " << cont << ": ";
        if(a + b == c)
            cout << a << "+" << b << "=" << c << '\n';
        else if(a == b + c)
            cout << a << "=" << b << "+" << c << '\n';
        else if(a - b == c)
            cout << a << "-" << b << "=" << c << '\n';
        else if(a == b - c)
            cout << a << "=" << b << "-" << c << '\n';
        else if(a * b == c)
            cout << a << "*" << b << "=" << c << '\n';
        else if(a == b * c)
            cout << a << "=" << b << "*" << c << '\n';
        else if(a / b == c)
            cout << a << "/" << b << "=" << c << '\n';
        else if(a == b / c)
            cout << a << "=" << b << "/" << c << '\n';
        cont++;
    }
    return 0;
}

