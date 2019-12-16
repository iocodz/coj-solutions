#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;

    int sol = 0;
    for(int i = 1 ; i < a.size() ; i++)
        if(a[i] == a[i - 1] && a[i] == '+') sol++;
        else if(a[i] == a[i - 1] && a[i] == '-') sol--;


    cout << sol << '\n';
    return 0;
}
