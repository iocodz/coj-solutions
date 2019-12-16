#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10001;

int N, M, con;
int cc[MAXN];

void desc(int t, int k){
    if(k){
        for(int i = t ; i <= k ; i++){
            con++;
            cc[con] = i;
            desc(i, k - i);
            con--;
        }
    }
    else{
        cout << M << " = ";
        for(int i = 1 ; i < con ; i++)
            cout << cc[i] << " + ";
        cout << cc[con] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        desc(1, M);

        if(N > 0)
        cout << '\n';
    }
    return 0;
}
