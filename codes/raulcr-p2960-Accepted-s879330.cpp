#include <bits/stdc++.h>

using namespace std;

int sol;
string N;
map<char, int> M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    M['A'] = M['D'] = M['O'] = M['P'] = M['Q'] = M['R'] = 1;
    M['B'] = 2;

    cin >> N;

    for(int i = 0 ; i < N.size() ; i++)
        sol += M[N[i]];

    cout << sol;

    return 0;
}
