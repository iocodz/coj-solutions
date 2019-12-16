#include <iostream>

using namespace std;
bool prime(long long a){
    if (a < 2){
        return false;
    }
    if (a == 2){
        return true;
    }
    if (a > 2){

        long long b;
        b = 2;
        while (a >= b * b){
            if (a % b == 0){
                return false;
        }
        b++;
    }
    return true;
}
    }
long long nextprime(long long a){
    //a++;
    while (!prime(a)){
        a++;
    }
    return a;
}
int main()
{
    int a;
    long long b;
    cin >> a;
    while (a > 0){
        cin >> b;
        cout << nextprime(b) << endl;
        a--;
    }
    return 0;
}
