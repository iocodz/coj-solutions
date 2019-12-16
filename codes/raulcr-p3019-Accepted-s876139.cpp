#include <bits/stdc++.h>

using namespace std;

const int MAXN = 51;

int T, N, sol;
int A[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N;

        for(int i = 1 ; i <= N ; i++){
            cin >> A[i];
            A[i] -= i;
            if(A[i] < 0)
                A[i] = abs(A[i]);
            sol += A[i];
        }

        cout << sol << '\n';

        sol = 0;
    }
    return 0;
}
