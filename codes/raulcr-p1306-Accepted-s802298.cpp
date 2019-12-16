#include <bits/stdc++.h>

using namespace std;

int T;
string N;

int main()
{
    cin >> T;

    while(T--){
        cin >> N;

        int M = N[N.size() - 1] - '0';

        if(N.size() > 1)
            M += ((N[N.size() - 2] - '0') * 10);

        if(M % 4 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
