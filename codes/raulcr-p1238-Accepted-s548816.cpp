///by r@ul!

#include <string>
#include <iostream>

using namespace std;

typedef long long LL;

LL calcfact(int a){
    LL fact = 1;
    for(int i = 1 ; i <= a ; i++){
        fact *= i; 
    }
    return fact;
}

int acmnot(string a){
    int lc = a.length(), sol = 0;
    for(int i = 0 ; i < a.length() && lc > 0; i++ , lc--){
        sol += ((a[i] - 48)* calcfact(lc));
    }
    return sol;
}

int main()
{
    string a;
    while(cin >> a && a != "0"){
          cout << acmnot(a) << '\n'; 
    }
    return 0;
}
