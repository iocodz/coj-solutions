#include <iostream>
#include <cassert>
#include <string>
#include <algorithm>

using namespace std;

typedef string BN;
typedef long long LL;

BN toBN(LL N){
    if (N == 0)
        return "0";
    BN r = "";
    while (N > 0){
        char c = (N % 10) + '0';
        r = c + r;
        N /= 10;
    }
    return r;
}

int compare(BN a, BN b){
    if (a.length() < b.length())
        return -1;
    if (a.length() > b.length())
        return 1;
    for (int i = 0 ; i < a.length() ; i++){
        if (a[i] < b[i])
            return -1;
        if (a[i] > b[i])
            return 1;
    }
    return 0;
}

BN por10(BN a, int k){
    if (a == "0")
        return "0";
    string z(k, '0');
    return a + z;
}

BN sum(BN a, BN b){
    BN r = "";
    if (a.length() > b.length())
        swap(a, b);
    while (a.length() < b.length())
        a = "0" + a;
    int llevo = 0;
    for (int i = a.length() - 1 ; i > -1 ; i--){
        int s = (a[i] - '0') + (b[i] - '0') + llevo;
        r = ((char)((s % 10) + '0')) + r;
        llevo = s / 10;
    }
    if (llevo > 0)
        r = ((char)(llevo + '0')) + r;
    return r;
}

BN mult(BN a, BN b);

BN mult(BN a, int d){
    if (d > 9)
        return mult(a, toBN(d));
    if (d == 0)
        return "0";

    BN r = "";
    int llevo = 0;
    for (int i = a.length() - 1 ; i > -1 ; i--){
        int s = (a[i] - '0') * d + llevo;
        r = ((char)((s % 10) + '0')) + r;
        llevo = s / 10;
    }
    if (llevo > 0)
        r = ((char)(llevo + '0')) + r;
    return r;
}

BN mult(BN a, BN b){
    BN r = "0";
    int z = 1;
    for (int i = 0 ; i < b.length() ; i++){
        BN m = mult(a, b[i] - '0');
        r = por10(r, 1);
        r = sum(m, r);
    }
    return r;
}

BN factorial(int N){
    BN r = "1";
    for (int i = 2 ; i <= N ; i++)
        r = mult(r, i);
    return r;
}

BN pot(const BN& a, int b){
    if (b == 0)
        return "1";
    if (b % 2 == 0){
        BN r = pot(a, b / 2);
        r = mult(r, r);
        return r;
    }
    return mult(pot(a, b - 1), a);
}

int main()
{
    int N;
    cin >> N;
    cout << pot("2", N);

    return 0;
}
