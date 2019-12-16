#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;
const int MAXM = log2(MAXN) + 1;

int T, N, M;
int rmq[MAXN][MAXM];

void build(){
    for(int i = 1 ; (1 << i) <= N ; i++)
        for(int j = N - (1 << i) + 1 ; j >= 1 ; j--)
            rmq[j][i] = max(rmq[j][i - 1], rmq[j + (1 << (i - 1))][i - 1]);
}

inline int query(int a, int b){
    int lg = log2(b - a + 1);
    return max(rmq[a][lg], rmq[b - (1 << lg) + 1][lg]);
}

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    cin >> T;
    while(T--){
        cin >> N >> M;
        for(int i = 1 ; i <= N ; i++)
            cin >> rmq[i][0];

        build();

        int a = 1, b = M;
        while(b <= N){
            if(a != 1)
                cout << ' ';
            cout << query(a, b);
            a++;
            b++;
        }
        cout << '\n';

        memset(rmq, 0, sizeof(rmq));
    }
    return 0;
}