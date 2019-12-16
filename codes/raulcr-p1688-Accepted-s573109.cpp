#include <iostream>
#include <string>

using namespace std;

string a = "*";

void cousp(int x){
    while (x--)
        cout << ' ';
}

void construir(int k){
    for (int i = 1 ; i < k ; i++)
        a += "*";
}

int main()
{
    int x;
    while (cin >> x && x != -1){
        if (x == 1){
            int y;
            cin >> y;
            for (int i = y - 1 ; i >= 0 ; i--){
                cousp(i);
                cout << a << '\n';
                a += "**";
            }
        }

        else if (x == 2){
            int k, b;
            cin >> k >> b;
            construir(k);
            for (int i = b - 1 ; i >= 0 ; i--){
                cousp(i);
                cout << a << '\n';
            }
        }

        else if (x == 3){
            int k, b;
            cin >> k >> b;
            construir(k);
            for (int i = 0 ; i < b ; i++)
                cout << a << '\n';
        }

        cout << '\n';

        a = "*";
    }

    return 0;
}
