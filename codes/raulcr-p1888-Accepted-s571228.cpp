#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool six (string a){
    for (int i = 0 ; i < a.length() ; i++)
        if (a[i] == '6')
            return 1;

    return 0;
}

bool div2(string a){
    if (a[a.length() - 1] % 2 == 0)
        return 1;

    return 0;
}

long long sum (string a){
    long long s = 0;

    for (int i = 0 ; i < a.length() ; i++)
        s += a[i] - '0';

    return s;
}

bool evil(const string & s){
    if (sum(s) % 6 == 0 && six(s) && div2(s))
        return true;
    return false;
}

int main()
{
    string a;

    while (cin >> a){
        if (a[0] == '-')
            a = a.substr(1);
        if (evil(a))
            cout << "EVIL\n";
        else
            cout << "GOOD\n";
    }
    return 0;
}
