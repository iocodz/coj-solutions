#include <bits/stdc++.h>

using namespace std;

string a;
int b[5];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("a.txt", "r", stdin);

    while(cin >> a){
        for(int i = 0 ; i < a.size() ; i++)
            if(a[i] == 'a' || a[i] == 'A')
                b[0]++;
            else if(a[i] == 'e' || a[i] == 'E')
                b[1]++;
            else if(a[i] == 'i' || a[i] == 'I')
                b[2]++;
            else if(a[i] == 'o' || a[i] == 'O')
                b[3]++;
            else if(a[i] == 'U' || a[i] == 'u')
                b[4]++;
    }

    cout << b[0] << ' ' << b[1] << ' ' << b[2] << ' ' << b[3] <<' ' << b[4];
    return 0;
}
