#include <iostream>

using namespace std;

int main()
{
    int b;
    cin >> b;
    if (b >= 1){
    cout << (b-1+1)*(1+b)/2;
    }
    else {
        if (b < 1){
            cout << (-b*(b-1)/2)+1;
        }
    }

    return 0;
}