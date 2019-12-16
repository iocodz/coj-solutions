#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1e6 + 5;

int N, M, w[MAXN], l[MAXN], a, b;
bool mk[MAXN];
vector<int> ad[MAXN];
vector<pii> sol;

void dfs(int nodo, int root){
    mk[nodo] = 1;
    for(int i = 0 ; i < ad[nodo].size() ; i++){
        int nn = ad[nodo][i];
        if(!mk[nn]){
            l[nn]++;
            w[root]++;
            dfs(nn, root);
        }
    }
}

int main()
{
    cin >> N >> M;
    for(int i = 1 ; i <= M ; i++){
        cin >> a >> b;
        ad[a].push_back(b);
    }

    for(int i = 1 ; i <= N ; i++){
        dfs(i, i);
        fill(mk, mk + MAXN, 0);
    }

    for(int i = 1 ; i <= N ; i++)
        if(l[i] + w[i] == N - 1)
            sol.push_back(pii(N - w[i], i));

    sort(sol.begin(), sol.end());

    for(int i = sol.size() - 1 ; i >= 0 ; i--)
        cout << sol[i].first << ' ' << sol[i].second << '\n';

    return 0;
}
