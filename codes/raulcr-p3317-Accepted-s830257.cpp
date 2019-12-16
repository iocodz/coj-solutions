#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;
const int MOD = 1e9 + 7;

int N;
int FB[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    FB[0] = FB[1] = 1;

    for(int i = 2 ; i < MAXN ; i++)
        FB[i] = (FB[i - 1] + FB[i - 2]) % MOD;

    int k;
    for(int i = 1 ; i <= N ; i++){
        cin >> k;
        cout << FB[k] << '\n';
    }

    return 0;
}
