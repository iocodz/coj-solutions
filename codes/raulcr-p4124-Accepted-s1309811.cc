#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6 + 5;

int a[MAX], b[MAX];

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    for(int i = 0; i < MAX; i++){
        b[i] = 1e9;
    }

    int N; cin >>N;

    for(int i = 1; i <= N; i++){
        int x; cin >>x;
        a[x] = max(i, a[x]);
        b[x] = min(i, b[x]);
    }

    int sol = 0;

    for(int i = 0; i < MAX; i++){
        if(b[i] != 1e9)
            sol = max(sol, a[i] - b[i] + 1);
    }


    cout <<sol <<"\n";
    return 0;
}
