///by taskkill
#include <bits/stdc++.h>

using namespace std;

int N;
string a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    getline(cin, a);
    while(N--){
        getline(cin, a);
        getline(cin, b);

        string ca = "", cb = "";

        for(int i = 0 ; i < a.size() ; i++)
            if(a[i] != ' ')
                ca += a[i];
        for(int i = 0 ; i < b.size() ; i++)
            if(b[i] != ' ')
                cb += b[i];

        sort(ca.begin(), ca.end());
        sort(cb.begin(), cb.end());

        if(ca == cb)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
