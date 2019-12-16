#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 1;

int N, sol = 0;
int ABI[MAXN], A[MAXN], maxll[MAXN];


int query(int pos){
    int sum = 0;

    for(int i = pos; i >= 1; i -= (i & -i))
        sum = (ABI[i] + sum) % MOD;
    return sum;
}

void update(int pos, int val){
    for(int i = pos; i < MAXN; i += (i & -i))
        ABI[i] = (ABI[i] + val) % MOD;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for(int i = 2; i <= N; i++)
        cin >> A[i];

    update(1, 1);

    int j, aux;
    for(int i = 2; i <= N; i++){
        j = i - A[i];
        while(j <= 0)
            j++;
        maxll[i] = j;
    }

    for(int i = 2; i <= N; i++){
        aux = (query(i) - query(maxll[i] - 1));
        sol = aux % MOD;
        update(i, sol);
    }

    if(sol < 0)
        sol += MOD;

    cout << sol << '\n';
    return 0;
}
