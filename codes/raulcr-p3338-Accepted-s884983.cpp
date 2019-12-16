#include <bits/stdc++.h>

using namespace std;

int N;
char co = 'A';
map<char, char> mp;
string a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int t = 1 ; t <= N ; t++){
        getline(cin, a);
        getline(cin, a);
        cin >> b;

        for(int i = 0 ; i < b.size() ; i++)
            if(b[i] != ' '){
                mp[co] = b[i];
                co++;
            }

        cout << t << ' ';

        for(int i = 0 ; i < a.size() ; i++)
            if(a[i] != ' ')
                cout << mp[a[i]];
            else
                cout << a[i];
        cout << '\n';

        mp.clear();
        co = 'A';
        a = b = "";
    }
    return 0;
}
