#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5001;

int N, a, b;
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
        cin >> a >> b;

        if(dv[a] - a == b || dv[b] - b == a){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}

