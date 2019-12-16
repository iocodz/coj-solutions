#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int N, M;
int b[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i = 1 ; i <= N ; i++){
        cin >> b[i];
        b[i] += b[i - 1];
    }

    while(M--){
        int a; cin >> a;
        cout << (lower_bound(b + 1, b + N, a + 1) - b) << '\n';
    }

    return 0;
}
