#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e5 + 1;

LL TA[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for( ; N > 0; N--){
        int t, q; cin >> t >> q;
        for(int i = 1 ; i <= t ; i++){
            cin >> TA[i];
            TA[i] += TA[i - 1];
        }

        while(q--){
            int x, y;
            cin >> x >> y;
            x++; y++;
            cout << TA[y] - TA[x - 1] << '\n';
        }
        if(N > 1) cout << '\n';
    }

    return 0;
}
