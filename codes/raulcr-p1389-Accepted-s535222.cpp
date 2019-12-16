#include <iostream>
#include <string>

using namespace std;

bool palind(string a){
    int aa;
    string pa = "";
    aa = a.length() - 1;
    for (int i = aa; i >= 0; i--){
        pa += a[i];
    }
    if (pa == a){
        return 1;
    }
    return 0;
}

string substr(string a, int i, int j){
    string sol = "";
    for ( ; i <= j; i++){
        sol += a[i];
    }
    return sol;
}

int main()
{
    string a, sol = "";
    cin >> a;
    for (int i = 0; i < a.length(); i++){
        for (int j = i; j < a.length(); j++){
            string sc = substr(a, i, j);
                if (palind(sc) && sc.size() > sol.size()) {
                    sol = sc;
                }
            }
        }
    cout << sol;
    return 0;
}
