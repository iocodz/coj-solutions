#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin >> c;

    while(c--){
        string a, b;
        cin >> a >> b;
        bool f = true;
        for(int i = 0 ; i < a.size() ; i++){
            if(!f) break;
            if(a[i] != b[i] && b[b.size() - i - 1] != a[i]) f = false;
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
