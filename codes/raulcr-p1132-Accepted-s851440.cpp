#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5e5 + 1;

int N, K;
int dv[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= MAXN ; i++)
        for(int j = i ; j <= MAXN ; j += i)
            dv[j] += i;

    while(N--){
        cin >> K;

        cout << dv[K] - K << '\n';
    }

    return 0;
}

