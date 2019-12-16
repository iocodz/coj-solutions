#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int N, M;
int A[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        int s = -(MAXN * MAXN);

        for(int i = 1 ; i <= M ; i++){
            cin >> A[i];
            s = abs(A[i] - i) > s ? abs(A[i] - i) : s;
//            s = abs(M - A[i] + 1 - i) > s ? s : abs(M - A[i] + 1 - i);
        }

        cout << s << '\n';
    }
    return 0;
}
