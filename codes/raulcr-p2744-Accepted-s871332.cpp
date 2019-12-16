///by taskkill
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

int N, ma;
int A[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> A[i];

    sort(A + 1, A + 1 + N);

    for(int i = N ; i >= 1 ; i--){
        ma--;
        ma = max(ma, A[i]);
    }

    cout << N + ma + 1;
    return 0;
}
