#include <bits/stdc++.h>

using namespace std;

set<string > mk;
int sol = 0;

int main()
{
    string a;
    cin >> a;

    for(int i = 0 ; i < a.size() ; i++)
        for(int j = 0 ; j < a.size() ; j++){
            string c = a.substr(i, j);
            if(mk.find(c) == mk.end()){
                sol++;
                mk.insert(c);
            }
        }
    cout << sol;
    return 0;
}
