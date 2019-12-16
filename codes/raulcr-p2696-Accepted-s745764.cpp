#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int N, M;
vector<int> adlis[MAXN];
set<pair<int, int> > S;

int main()
{
    cin >> N >> M;

    for(int i = 1 ; i <= M ; i++){
        int a, b;
        pair<int, int> c;
        cin >> a >> b;

        c = make_pair(a, b);

        if(S.find(c) == S.end()){
            adlis[a].push_back(b);
            S.insert(c);
        }
    }

    int ma = 0;
    vector<int> sol;

    for(int i = 1 ; i <= N ; i++){
        if(adlis[i].size() > ma){
            ma = adlis[i].size();
            sol.clear();
            sol.push_back(i);
        }
        else if(adlis[i].size() == ma)
            sol.push_back(i);
    }

    cout << sol[0];

    if(sol.size() > 1)
        for(int i = 1 ; i < sol.size() ; i++)
            cout << ' ' << sol[i];

    return 0;
}
