#include <cstdlib>
#include <iostream>

using namespace std;

double disc(int a, int  b, int c){
     double disc;
     disc = (b*b) - 4 * (a * c);
     return disc;
}

int main()
{
    int cant;
    cin >> cant;
    while (cant > 0){
        int a, b, c;
        cin >> a >> b >> c;
        if (disc(a, b, c) > 0)
           cout << "SI\n";
        if (disc(a, b, c) < 0)
           cout << "NO\n";
        system("PAUSE");
        cant--;
    }
    return 0;
}