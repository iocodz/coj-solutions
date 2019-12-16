///by r@ul!

#include <string>
#include <iostream>

using namespace std;

int vals[26];

int prec(){
    for(int i = 1 ; i <= 26 ; i++){
            vals[i] = i;
    }
}

int sum(string a){
    int suma = 0;
    for(int i = 0; i < a.length() ; i++){
            char c = a[i];
            suma += vals[c - 64];
    }
    return suma;
}

int main()
{
    prec();
    string a;
    cin >> a;
    cout << sum(a);
    return 0;
}
