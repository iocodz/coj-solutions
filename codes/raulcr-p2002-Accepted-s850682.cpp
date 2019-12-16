#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;

int N;
int A[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("cowrow.in", "r", stdin);
//    freopen("cowrow.out", "w", stdout);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> A[i];

    int sol = 0;
    for(int i = 1 ; i <= N ; i++){
//        int pi = 1;
        int pf = 1;
        int cont = 0;
        for(int j = 1 ; j <= N ; j++){
            if(A[j] == A[i])
                continue;

            if(A[j] == A[pf])
                cont++;

            else {
                pf = j;
                j--;
                cont = 0;
            }

            if(sol < cont)
                sol = cont;
        }
    }

    cout << sol;
    return 0;
}
