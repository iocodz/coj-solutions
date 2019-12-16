#include <iostream>

using namespace std;

bool prime(int a){
    if (a < 2){
        return false;
    }
    if (a == 2){
        return true;
    }
    if (a > 2){
        long long b = 2;
        while (a >= b * b){
            if (a % b == 0){
                return false;
            }
        b++;
        }
    return true;
    }
}

int main(){
    int a;
    while (cin >> a){
        if (a == 0)
            return 0;
        long long prim = 1;
        for (int i = 2; i <= a; i++){
            if (prime(i))
                prim *= i;
        }
        cout << prim << endl;
    }
    return 0;
}
