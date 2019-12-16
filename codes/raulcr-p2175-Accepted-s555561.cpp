///by r@ul!

#include <iostream>
#include <string>

using namespace std;

bool prime(int a){
    if(a == 2)
        return 1;
    if(a < 2)
        return 0;
    for(int i = 2 ; i * i <= a ; i++)
        if(a % i == 0)
            return 0;

    return 1;
}

int antp(int a){
    for(int i = a ; i >= 1 ; i--)
        if(prime(i))
            return i;
}

int next(int a){
    for(int i = a ;  ; i++)
        if(prime(i))
            return i;
}

int main(){
    int a;
    int cc;
    cin >> cc;
    while(cc--){
        cin >> a;
        cout << antp(a) << ' ' << next(a) << endl;
    }
    return 0;
}
