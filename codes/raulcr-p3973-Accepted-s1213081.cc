#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

map<string, pii> mk;
int sol = 0;

int main()
{
    string a;
    cin >> a;

    for(int i = 0 ; i < a.size() ; i++)
        for(int j = i ; j < a.size() ; j++){
            string c = a.substr(i, j - i + 1);
            if(mk.find(c) == mk.end()){
                mk[c] = (pii(i, j));
            }
            else{
                pii a = mk[c];
//                if(a.second <= i)
                    sol = max(sol, j - i + 1);
            }
        }
    cout << sol;
    return 0;
}
