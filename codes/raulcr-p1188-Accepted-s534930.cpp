#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int ca, cb;
    long long resul, c = 0;
    cin >> a >> b;
    ca = a.length() - 1;
    cb = b.length() - 1;
    for (int i = 0; i <= ca; i++){
        for (int j = 0; j <= cb; j++){
            resul = (a[i] - 48) * (b[j] - 48);
            c += resul;
        }
    }
    cout << c;
    return 0;
}
