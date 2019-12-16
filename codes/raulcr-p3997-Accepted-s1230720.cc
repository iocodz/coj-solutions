#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    int T;
    cin >> T;
    while(T--)
    {
        string a;
        cin >> a;
        if(a[0] == 'M' || a[0] == 'W' || a[0] == 'F') 
             cout << "677\n";
        else if(a[1] == 'h' || a[0] == 'T') 
             cout << "678\n";
        else cout << "679\n";
    }
    return 0;
}