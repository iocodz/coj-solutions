///by r@ul!

#include <iostream>
#include <string>

using namespace std;

int rev(int a){
    int r = 0;
    while(a > 0){
        r = r * 10 + (a % 10);
        a /= 10;
    }
    return r;
}

int main()
{
    int a;
    while(cin >> a){
        if(rev(a) <= a){
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}
