#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    cin >> N;

    while(N--){
        string a;
        cin >> a;
        if(a.size() > 10)
            cout << a[0] << a.size() - 2 << a[a.size() - 1] << '\n';
        else
            cout << a << '\n';
    }
    return 0;
}
