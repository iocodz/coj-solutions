#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int N, M, pos[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 1 ; i <= N ; i++) pos[i] = i;
    for(int i = 1 ; i <= M ; i++){
        int a; cin >> a;
        int f = 0;
        for(int j = 1 ; j <= N ; j++){
            if(!pos[j]) continue;
            f++;
            if(f % a == 0)
                pos[j] = 0;
        }
    }

    for(int i = 1 ; i <= N ; i++)
        if(pos[i])
            cout << i << '\n';

    return 0;
}
