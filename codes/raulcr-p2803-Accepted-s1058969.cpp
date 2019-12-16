#include<bits/stdc++.h>

using namespace std;

const int MAXN = 11;

int N, M;
char a[MAXN][MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    while(N--){
        cin >> M;
        for(int i = 0 ; i < M ; i++)
            cin >> a[i];
        bool sol = 1;
        for(int i = 0 ; i < M ; i++)
            for(int j = 0 ; j < M ; j++){
                if(i != M - 1 && a[i][j] == a[i + 1][j]){
                    sol = 0;
                    goto sol;
                }
                else if(j != M - 1 && a[i][j] == a[i][j + 1]){
                    sol = 0;
                    goto sol;
                }

            }

        sol:
        if(sol)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;

}
