#include <bits/stdc++.h>

using namespace std;

int ca, cb;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a;

    a = a + '-';

    for(int i = 1 ; i < a.size() ; i++){
        if(a[i] != a[i - 1]){
            if(a[i - 1] == 'a')
                ca++;
            else
                cb++;
        }
    }

    cout << min(ca, cb);

    return 0;

}

