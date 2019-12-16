#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    while (a!=0){
        cin >> b >> c;
        if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
            cout << "right" << endl;
        }
    
        else {
        cout << "wrong" << endl;
        }
        cin >> a;
    }
    return 0;
}
