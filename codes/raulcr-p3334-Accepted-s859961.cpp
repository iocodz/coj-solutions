#include <bits/stdc++.h>

using namespace std;

int N, M, sol;
string A, B;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> A >> M >> B;

    int j = 0, i = 0;
    bool ok = false;

    for( ; i < M && j < N ; j++){//cad A
        if(A[j] == B[i])
            i++;

        else
            sol++;

        if(i == M){
            i = 0;
            ok = true;
        }
    }

    if(i != 0)
        sol += i;

    if(!ok)
        cout << -1;
    else
        cout << sol;

    return 0;
}
