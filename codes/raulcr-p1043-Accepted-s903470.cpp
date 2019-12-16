#include <bits/stdc++.h>

using namespace std;

const int MAXN = 15;

int N, M, c;
int s[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        for(int i = 15 ; M > 0 && i >= 0 ; i--)
            if((1 << i) <= M){
                M -= (1 << i);
                s[c] = i;
                c++;
            }

        cout << s[c - 1];
        s[c - 1] = 0;
        for(int i = c - 2 ; i >= 0 ; i--){
            cout << ' ' << s[i];
            s[i] = 0;
        }

        cout << '\n';

        c = 0;
    }
    return 0;
}
