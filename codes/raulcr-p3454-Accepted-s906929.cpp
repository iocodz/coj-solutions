#include <bits/stdc++.h>

using namespace std;

int N, c, a, t;
string b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    while(N--){
        cin >> b;

        c = a = t = 0;
        for(int i = 0 ; i < b.size() ; i++){
            if(b[i] == 'C') c++;
            if(b[i] == 'A') a += c;
            if(b[i] == 'T') t += a;
        }

        cout << t << '\n';
    }

    return 0;
}
