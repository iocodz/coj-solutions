#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;

int N, maxh;
int O[MAXN];
int C[MAXN];
int AT[MAXN];

int main()
{
    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        int a, b;
        cin >> a >> b;
        O[a]++, C[b]++;
        if(b > maxh)
            maxh = b;
    }

    int mc = 0;

    for(int i = 1 ; i <= maxh ; i++){
        AT[i] = AT[i - 1] + O[i];
        if(AT[i] > mc)
            mc = AT[i];
        AT[i] -= C[i];
        //cout << i << ' ' << AT[i] << '\n';
    }

    cout << mc;

    return 0;
}

