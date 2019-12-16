#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3 + 1;

int N, M;
string lis[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        for(int i = 1 ; i <= M ; i++)
            cin >> lis[i];

        for(int i = 1 ; i < M ; i++){
            if(lis[i] < lis[i + 1])
                cout << i + 1 << ' ';
            else
                cout << -1 << ' ';
        }
        cout << -1 << '\n';
    }
    return 0;
}
