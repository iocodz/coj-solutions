#include <iostream>
#include <algorithm>

using namespace std;
/*
int mcd(long long a, long long i){
    for (long long x = min(i, a); x > 0; x--){
        if (a % x == 0 && i % x == 0){
            return x;
        }
    }
}
*/
int main()
{
    int a;
    int z = 0;
    cin >> a;
    for (int  i = a - 1; i > 0; i--){
        if(__gcd(a, i) == 1)
            z++;
    }
    cout << z;
    return 0;
}
