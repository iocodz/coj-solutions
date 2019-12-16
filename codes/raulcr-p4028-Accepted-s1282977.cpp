#include <bits/stdc++.h>
using namespace std;
int N, M, T, sol, sol2;
int main(){    ios_base::sync_with_stdio(0);    cin.tie(0);    cout.tie(0);    cin >> T;    while(T--){        cin >> N >> M;        sol = (M - N + 1) / 2;        sol2 = sol;        sol += ((M % 2 == 0) && (N % 2 == 0));        sol2 += ((M % 2 != 0) && (N % 2 != 0));        cout << sol << ' ' << sol2 << '\n';}return 0;}
