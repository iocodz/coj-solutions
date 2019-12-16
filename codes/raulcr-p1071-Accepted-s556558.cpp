#include <iostream>
#include <cassert>
#include <string>
#include <algorithm>

using namespace std;

typedef long long LL;

string eliminZerIzq(string a){
    string sol = "";
    int x = 0;

    for (int i = 0 ; i < a.length() ; i++){
        if (a[i] == '0')
            x++;

        else
            break;
    }

    for (int i = x ; i < a.length() ; i++)
        sol += a[i];

    return sol;
}

string restwo(string a){
    string sol = "";
    int llevo = 2;

    for (int i = a.length() - 1 ; i >= 0 ; i--){
        int k = (a[i] - '0') - llevo;

        if (k < 0){
            k += 10;
            llevo = 1;
        }
        else
            llevo = k / 10;
        char s = (k % 10) + '0';
        sol = s + sol;
    }

    return eliminZerIzq(sol);
}

string sum(string a, string b){
    string r = "";

    if (a.length() > b.length())
        b = "0" + b;

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


int main()
{
    string a;
    while (cin >> a){
        if (a == "0")
            cout << 0 << '\n';

        else if (a == "1")
            cout << 1 << '\n';

        else
            cout << sum(a, restwo(a)) << '\n';
    }
    return 0;
}
