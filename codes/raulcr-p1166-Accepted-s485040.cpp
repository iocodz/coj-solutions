#include <iostream>

using namespace std;

int main()
{
    int a, b, c, par, imp;
    cin >> a;
    while (0 < a){
        cin >> b;
        a--;
        par = 0;
        imp = 0;
        while (0 < b){
            b--;
            cin >> c;
            if (c % 2 == 0){
                par++;
            }
            else {
                imp++;
            }
        }
         cout << par << " even and " << imp <<" odd." <<endl;

    }
    return 0;
}
