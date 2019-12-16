#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e5 + 5;
const int mod = 2010;

vector <int> sol, lista[MAX];

bool mark[MAX];
int n, m, a, b, cant, ord[MAX];

void dfs(int node) {
    cant--;
    for(int i : lista[node])
        if(!mark[i]) {
            mark[i] = 1;
            dfs(i);
        }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    while(m--) {
        cin >> a >> b;
        lista[a].push_back(b);
    }

    for(int i = 1; i <= n; i++)
        cin >> ord[i];

    cant = n;
    for(int i = n; i >= 1; i--) {
        sol.push_back(cant);
        if(!mark[ord[i]]) {
            mark[ord[i]] = 1;
            dfs(ord[i]);
        }
    }

    reverse(sol.begin(), sol.end());

    for(int i : sol)
        cout << i << "\n";
}