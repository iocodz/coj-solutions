#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int T, N, sol;
int A[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N;

        sol = 0;

        for(int i = 1 ; i <= N ; i++)
            cin >> A[i];

        for(int i = 1 ; i < N ; i++)
            for(int j = i + 1 ; j <= N ; j++)
                if(A[i] > A[j]){
                    sol++;
                    swap(A[i], A[j]);
                }
        cout << "Optimal train swapping takes " << sol << " swaps.\n";
    }
    return 0;
}
