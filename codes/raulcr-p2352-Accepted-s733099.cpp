#include <bits/stdc++.h>

using namespace std;

int N, T;
string A[10001];

bool pref(int i, int j){
    for(int k = 0 ; k < A[i].size() ; k++)
        if(A[i][k] != A[j][k])
            return 0;
    return 1;
}

int main()
{
    cin >> N;

    while(N--){
        cin >> T;

        for(int i = 1 ; i <= T ; i++)
            cin >> A[i];

        sort(A + 1, A + 1 + T);

        bool flag = false;

        for(int i = 1 ; i < T ; i++){
            if(pref(i, i + 1)){
                cout << "NO\n";
                flag = true;
                break;
            }
        }

        if(!flag)
            cout << "YES\n";

        //memset(A, " ", sizeof(A));
    }
    return 0;
}
