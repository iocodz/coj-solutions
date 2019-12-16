#include <iostream>
#include <string>

using namespace std;

int sasd(int a){
    int cont = 0;
    string res = "";
    while (a > 0){
        if (a % 2 == 1){
            cont++;
        }
        a /= 2;
    }
    return cont;
}

int main()
{
    int cc, p, u;
    cin >> cc;
    while (cc > 0){
        int b = 0;
        cin >> p >> u;
        for (int i = p ; i <= u ; i++)
            b += sasd(i);
        cout << b << endl;
        cc--;
    }

    return 0;
}
