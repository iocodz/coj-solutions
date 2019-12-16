#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long LL;

LL convbi(string a){
    LL sol = 0, pos = 0;

    for (int i = a.length() - 1 ; i >= 0 ; i--, pos++){
        sol += (a[i] - '0') * (pow(2, pos + 1) - 1);
    }

    return sol;
}

int main()
{
    string n;
    while (cin >> n && n != "0"){
        cout << convbi(n) << '\n';
    }

    return 0;
}
