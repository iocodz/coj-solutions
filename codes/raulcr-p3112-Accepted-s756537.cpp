///by taskkill bronce
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

int N;
int X[MAXN];
int V[MAXN];
int sol = 1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> X[i] >> V[i];

    int pos = N;

    for(int i = N - 1 ; i >= 1 ; i--){
        if(V[i] > V[pos])
            continue;
        sol++;
        pos = i;
    }

    cout << sol;

    return 0;
}
