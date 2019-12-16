#include <bits/stdc++.h>

using namespace std;

string M, mn(51, 'z');

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> M;

    for(int i = 1 ; i < M.size() ; i++)
        for(int j = i + 1 ; j < M.size() ; j++){
            string a = M.substr(0, i);
            string b = M.substr(i, j - i);
            string c = M.substr(j);

            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());

            if(a + b + c < mn)
                mn = a + b + c;
        }

    cout << mn;

    return 0;
}
