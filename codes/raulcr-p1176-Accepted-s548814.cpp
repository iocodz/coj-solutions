///by r@ul!

#include <string>
#include <iostream>

using namespace std;

typedef long long LL;

LL conv(string a){
    LL sol = 0;
    LL pow = 1;
    for(int i = a.length() - 1 ; i >= 0 ; i--, pow *= 10){
        sol += (a[i] - 48) * pow;    
    }
    return sol;
}

string terc(LL a){
    string sol = "";
    for(int i = 0 ; a > 0 ; i++ , a /= 3){
        if(a % 3 == 0)
             sol += '0';
        else if(a % 3 == 1)
             sol += '1';
        else if(a % 3 == 2)
             sol += '2';
    }
    string solar = "";
    for(int i = sol.length()-1 ; i >= 0 ; i--){
        solar += sol[i];
    }
    return solar;
}

int main()
{
    string a;
    while(cin >> a && a[0] != '-'){
          cout << terc(conv(a)) << endl;          
    }
    return 0;
}
