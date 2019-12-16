#include <bits/stdc++.h>

using namespace std;

const int MAX = 3e5 + 5;

vector <int> lista[MAX], ady[MAX];

int n, a, b, sol, root, deg[MAX], dp[MAX], dp1[MAX];

stack <int> sv, sv2;

void dfs(int root) {
    sv.push(-1);
    sv.push(root);

    while(!sv.empty()) {
        root = sv.top();
        sv.pop();
        int p = sv.top();
        sv.pop();
        for(int to : lista[root])
            if(to != p && deg[to] > 1) {
                ady[root].push_back(to);
                sv.push(root);
                sv.push(to);
            }
    }
}

void solve(int aaaa) {
    sv.push(aaaa);
    sv2.push(aaaa);

    while(!sv.empty()) {
        int root = sv.top();
        sv.pop();
        for(int to : ady[root]) {
            sv.push(to);
            sv2.push(to);
        }
    }

    while(!sv2.empty()) {
        root = sv2.top();
        sv2.pop();

        for(int to : ady[root]) {
            if(dp[to] + deg[to] - 2 > dp[root]) {
                dp1[root] = dp[root];
                dp[root] = dp[to] + deg[to] - 2;
            } else if(dp[to] + deg[to] - 2 == dp[root]) {
                dp1[root] = max(dp1[root], dp[to] + deg[to] - 2);
            }
        }

        if(ady[root].size())
            sol = max(sol, dp[root] + dp1[root] + deg[root]);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    srand( 123 );

    cin >> n;

    for(int i = 1 ; i < n; i++) {
        cin >> a >> b;
        lista[a].push_back(b);
        lista[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        deg[i] = lista[i].size();
        sol = max(sol, deg[i] - 1);
    }

    vector <int> aux;

    for(int i = 1; i <= n; i++)
        if(lista[i].size() > 1)
            aux.push_back(i);

    if(!aux.size()) {
        cout << "0\n";
        return 0;
    }

    random_shuffle(aux.begin(), aux.end());

    for(int r = 0; r < min(50, (int)aux.size()); r++) {
        memset(dp, 0, sizeof(dp));
        memset(dp1, 0, sizeof(dp1));
        for(int i = 1; i <= n; i++)
            ady[i].clear();
        dfs(aux[r]);
        solve(aux[r]);
    }

    cout << sol << '\n';
}
