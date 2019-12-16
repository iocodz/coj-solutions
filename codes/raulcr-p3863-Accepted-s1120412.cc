#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const short MAX = 35;
short limit;

unordered_set <short> dp[MAX][MAX];
char s[5];
short n, lista[MAX], signo[MAX];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> lista[1];
    signo[1] = 1;
    for(short i = 2; i <= n; i++) {
        cin >> s >> lista[i];
        if(s[0] == '-')
            signo[i] = -1;
        else
            signo[i] = 1;
    }

    limit = 100 * n;

    for(short i = 1; i <= n; i++)
        dp[i][i].insert(lista[i]);

    for(short tam = 1; tam < n; tam++) {
        for(short i = 1; i + tam <= n; i++) {
            short j = i + tam;
            for(short k = 1; k < j; k++) {
                for(auto val : dp[i][k]) {
                    for(auto val2 : dp[k + 1][j]) {
                        dp[i][j].insert(val + val2 * signo[k + 1]);
                    }
                }
            }
        }
    }

    cout << dp[1][n].size() << "\n";
}
