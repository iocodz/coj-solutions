#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e8;

int N, Q;
int el[21];
bitset < MAXN > mk;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for(int i = 0; i < N ; i++)
        cin >> el[i];

    for(int i = 0 ; i < (1 << N) ; i++){
        int sum = 0;
        for(int j = 0 ; j < N ; j++)
            if(i & (1 << j))
                sum += el[j];
        mk[sum] = true;
    }

    cin >> Q;
    while(Q--){
        int a; cin >> a;
        if(mk[a])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
