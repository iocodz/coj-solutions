#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;

vector <int> lista[MAX];

int t, n, m, sol, cant, cant2, R, E, a, b, c[MAX];
bool mark[MAX];

void dfs(int node) {
    cant++;
    cant2 += lista[node].size();
    for(int to : lista[node]) {
        if(!mark[to]) {
            c[to] = c[node];
            mark[to] = 1;
            dfs(to);
        }
    }
}

int main() {
//    freopen("a.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> R >> E;
    for(int i = 1; i <= m; i++) {
        cin >> a >> b;
        lista[a].push_back(b);
        lista[b].push_back(a);
    }

    int id = 0;
    for(int i = 1; i <= n; i++)
        if(!c[i]) {
            c[i] = ++id;
            cant = cant2 = 0;
            mark[i] = 1;
            dfs(i);
            int num = cant * (cant - 1) / 2 - cant2 / 2;
            sol += min(R * num, E * cant);
        }

    cout << sol << "\n";
}
