#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int i, d, c, b;
    cin >> i;
    while (i > 0){
        cin >> a;
        b = a[a.length() - 1];
        c = a[a.length() - 2];
        d = (c * 10) + b;
        if (d % 4 == 0){
            cout << "YES"<<endl;
            }
        else {
            cout << "NO"<<endl;
        }
        i--;

    }
    return 0;
}
