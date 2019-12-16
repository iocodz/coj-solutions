#include <bits/stdc++.h>

using namespace std;

//typedef long long ll;

//const int MAX = 1e3 + 5;
const int MAX = 5001;
//const int mod = 2010;

int N, L, C;
int v[MAX], r[MAX];


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> L >> C;
    for(int i = 1 ; i <= N ; i++) {
        cin >> v[i];
    }

    sort(v + 1, v + 1 + N);
//
//    for(int i = v[N] ; i <= C ; i++){
//        int cantmi = 0;
//        for(int j = 1 ; v[j] <= C - i && j <= N ; j++)
//            cantmi++;
//
//        if(max(cantmi, N - cantmi) <= L){
//            cout << "S\n";
//            return 0;
//        }
//    }
    int s = 0;
    while(N >= L){
        s += v[N];
        N -= L;
    }

    if(v[N] + s > C)
        cout << "N\n";
    else
        cout << "S\n";
}
