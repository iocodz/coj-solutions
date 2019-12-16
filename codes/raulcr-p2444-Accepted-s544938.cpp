#include <iostream>
#include <string>

using namespace std;

bool sasd(int a){
    int cont = 0;
    string res = "";
    while (a > 0){
        if (a % 2 == 1){
            cont++;
        }
        char mod = ((a % 2)+ '0');
        res = mod + res;
        a /= 2;
    }
    if (cont % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int a, b = 0;        
    while (cin >> a)
        if (sasd(a))
            b++;
    cout << b;
    return 0;
}
