#include <bits/stdc++.h>

using namespace std;

const int MAXN = 31;

int T, N;
int anw[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    anw[1] = 1;
    for(int i = 2 ; i < MAXN ; i++)
        anw[i] = anw[i - 1] * 2 + 1;

    cin >> T;

    while(T--){
        cin >> N;

        cout << anw[N] << '\n';
    }
    return 0;
}
