#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;

vector <int> lista[MAX];

int t, n, m, a, b, d[MAX];

void dfs(int node, int p = -1) {
    for(int to : lista[node]) {
        if(to != p) {
            d[to] = d[node] + 1;
            dfs(to, node);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i < n; i++) {
            cin >> a >> b;
            lista[a].push_back(b);
            lista[b].push_back(a);
        }
        d[1] = 1;
        dfs(1);
        int ini = 1;
        for(int i = 1; i <= n; i++)
            if(d[i] > d[ini])
                ini = i;
        memset(d, 0, sizeof(d));
        dfs(ini);
        int sol = 0;
        for(int i = 1; i <= n; i++)
            sol = max(sol, d[i]);
        cout << sol + 1 << "\n";
        memset(d, 0, sizeof(d));
        for(int i = 1; i <= n; i++)
            lista[i].clear();
    }

}