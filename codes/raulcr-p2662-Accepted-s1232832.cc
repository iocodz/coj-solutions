#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, sol = 0;
    map<vector<string>, int > mk;
    cin >> a;
    while(a--)
    {
        vector<string > b;
        string k; cin >> k;
        b.push_back(k);cin >> k;
        b.push_back(k);cin >> k;
        b.push_back(k);

        sort(b.begin(), b.end());

        if(mk.find(b) == mk.end()){
            mk[b] = 1;
            sol = max(sol, 1);
        }
        else{
            mk[b]++;
            sol = max(sol, mk[b]);
        }
    }

    cout << sol;
    return 0;

}

