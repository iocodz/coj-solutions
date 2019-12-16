#include <bits/stdc++.h>

using namespace std;

string N;
int fact[11];

void fac(){
    fact[0] = 1;
    for(int i = 1 ; i < 11 ; i++)
        fact[i] = fact[i - 1] * i;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fac();

    while(cin >> N && N != "0"){
        int sol = 0;

        for(int i = N.size() - 1 , c = 1 ; i >= 0 ; i-- , c++)
            sol += ((N[i] - '0') * fact[c]);

        cout << sol << '\n';
    }
    return 0;
}
