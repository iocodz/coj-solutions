///by taskkill
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int N, M;
string K[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++)
        cin >> K[i];

    int s, pto;
    s = pto = 0;
    for(int i = 1 ; i <= N ; i++){
        bool f = false;
        for(int j = 0 ; j < M ; j++)
            if(K[i][j] == '/' || K[i][j] == '\\'){
                f = !f;
                s++;
            }
            else if(f)
                pto++;
    }

    cout << pto + s / 2;

    return 0;
}
