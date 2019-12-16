#include <bits/stdc++.h>

using namespace std;

int fact[100];

int factorial(int i){
//    int ret = 1;
//    while(i > 0){
//        ret *= i;
//        i--;
//    }
    return fact[i];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string Num;

    fact[0] = 1;
    for(int i = 1 ; i < 11 ; i++)
        fact[i] = fact[i - 1] * i;

    while(cin >> Num && Num != "0"){
        int sol = 0, longitud = Num.size();
        for(int i = 0 ; i < Num.size() ; i++){
            sol += (Num[i] - '0') * factorial(longitud);
            longitud--;
        }
        cout << sol << '\n';
    }

    return 0;
}
