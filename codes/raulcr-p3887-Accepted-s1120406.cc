#include <bits/stdc++.h>

using namespace std;

const int MAX = 105;

int n, m, a[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    int sol = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            int sol2 = 0;
            bool ok = 1;
            for(int k = 1; k < i; k++)
                if(a[k][j] >= a[i][j])
                    ok = 0;
            sol2 += ok;
            ok = 1;
            for(int k = 1; k < j; k++)
                if(a[i][k] >= a[i][j])
                    ok = 0;
            sol2 += ok;
            ok = 1;
            for(int k = i + 1; k <= n; k++)
                if(a[k][j] >= a[i][j])
                    ok = 0;
            sol2 += ok;
            ok = 1;
            for(int k = j + 1; k <= m; k++)
                if(a[i][k] >= a[i][j])
                    ok = 0;
            sol2 += ok;
//            cout << sol2 << " ";
            sol += sol2;
        }
//        cout << "\n";
    }

    cout << sol << "\n";
}