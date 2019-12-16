#include <bits/stdc++.h>

using namespace std;

const int oo = 2000000000;
const int MAXN = 2001;
int N, A;
int P[MAXN], H[MAXN], DP[MAXN];

int main()
{
    cin.tie(0);

    cin >> N >> A;

    for(int i = 1 ; i <= N ; i++)
        cin >> H[i] >> P[i];

    for(int i = 1 ; i <= N ; i++){
        DP[i] = oo;
        int j = i;
        int anch = P[i];
        int alt = H[i];

        while (j > 0 && anch <= A){
            if (DP[j - 1] + alt < DP[i]){
                DP[i] = min(DP[i], DP[j - 1] + alt);
            }
            j--;
            anch += P[j];
            alt = max(H[j], alt);
        }
    }

    cout << DP[N];


    return 0;
}
