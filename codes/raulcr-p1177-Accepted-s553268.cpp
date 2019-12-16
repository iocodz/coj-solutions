///by r@ul!

#include <string>
#include <iostream>

using namespace std;

string reverse(string a){
    string sol = "";
    for(int i = a.length() - 1 ; i >= 0 ; i--)
        sol += a[i];
    return sol;
}

int main()
{
    int a;
    string b;
    while(cin >> a && a != 0 && cin >> b){
        int lc = b.length() / a;
        for(int i = 0 ; i <= b.length() - lc ; i += lc)
            cout << reverse(b.substr(i, lc));
        cout << '\n';
    }
    return 0;
}

