#include <bits/stdc++.h>

using namespace std;

int N;
string M;

map<string, int> mp;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;
        sort(M.begin(), M.end());

        cout << mp[M] << '\n';
        mp[M]++;
    }

    return 0;
}