#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 5;

int N, M, t, comp[MAXN], cc;
vector<int> ad[MAXN];

void dfs(int nod){
    for(auto i : ad[nod]){
        if(comp[i])
            continue;
        comp[i] = comp[nod];
        dfs(i);
    }
}

int main()
{
    cin >> t;

    while(t--){
        cin >> N >> M;
        for(int i = 0 ; i < M ; i++){
            int a, b;
            cin >> a >> b;

            ad[a].push_back(b);
            ad[b].push_back(a);
        }

        for(int i = 1 ; i <= N ; i++)
            if(!comp[i]){
                comp[i] = ++cc;
                dfs(i);
            }

        cout << cc * (cc - 1) / 2 << '\n';

        fill(comp, comp + MAXN, 0);
        for(int i = 0 ; i <= N ; i++)
            ad[i].clear();

        cc = 0;
    }
    return 0;
}
