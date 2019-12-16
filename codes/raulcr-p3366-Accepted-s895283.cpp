#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int N, sol;
int v[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> v[i];

    for(int i = 1 ; i <= N ; i++){
        int j = i + 1;
        for( ; j <= N ; j++)
            if(v[j] - v[i] > sol)
                sol = v[j] - v[i];
    }

    cout << sol;

    return 0;
}
