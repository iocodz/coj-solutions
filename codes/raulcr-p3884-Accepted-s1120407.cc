#include <bits/stdc++.h>

using namespace std;

const int MAX = 305;

vector <int> x[MAX * MAX], y[MAX * MAX];
vector <int> ord;

int n, m, q, tt[100005], a[MAX][MAX], p[MAX * MAX];

int id(int i, int j) {
    return (i - 1) * m + j;
}

int find_p(int k) {
    if(p[k] == k)
        return k;
    return p[k] = find_p(p[k]);
}

set <int> s;

int dx[] = { 0, 1,  0, -1 };
int dy[] = { 1, 0, -1,  0 };

void solve(int t) {
    for(int i = 0; i < x[t].size(); i++)
        s.insert(p[id(x[t][i], y[t][i])]);

    for(int i = 0; i < x[t].size(); i++) {
        int xx = x[t][i];
        int yy = y[t][i];
        for(int j = 0; j < 4; j++) {
            int ff = xx + dx[j];
            int cc = yy + dy[j];
            if(1 <= ff && ff <= n && 1 <= cc && cc <= m && a[ff][cc] >= a[xx][yy]) {
                int p1 = find_p(id(ff, cc));
                int p2 = find_p(id(xx, yy));
                if(p1 != p2) {
                    p[p1] = p2;
                    if(s.find(p1) != s.end())
                        s.erase(s.find(p1));
                }
            }
        }
    }

//    cout << s.size() << "\n";
}

int main() {
//    freopen("a.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
            ord.push_back(a[i][j]);
        }
//    ord.push_back(0);
    sort(ord.begin(), ord.end());
    int tam = unique(ord.begin(), ord.end()) - ord.begin();
    while(ord.size() > tam)
        ord.pop_back();
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            int xx = lower_bound(ord.begin(), ord.end(), a[i][j]) - ord.begin() + 1;
            a[i][j] = xx;
//            cout << a[i][j];
            x[xx].push_back(i);
            y[xx].push_back(j);
        }
//        cout << "\n";
    }

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            p[id(i, j)] = id(i, j);

    cin >> q;

    for(int i = 1; i <= q; i++) {
        int t;
        cin >> t;
        t = upper_bound(ord.begin(), ord.end(), t) - ord.begin();
        tt[i] = t;
    }

    vector <int> sol;

    tt[q + 1] = tam;

    for(int i = q; i >= 1; i--) {
        for(int j = tt[i+1]; j > tt[i]; j--)
            solve(j);
        sol.push_back(s.size());
    }

    reverse(sol.begin(), sol.end());
    for(int i : sol)
        cout << i << " ";
    cout << "\n";
}
/*
4 5
1 2 3 3 1
1 3 2 2 1
2 1 3 8 3
1 2 2 2 2
6
0 1 2 3 4 5
*/
