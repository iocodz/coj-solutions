#include <bits/stdc++.h>

using namespace std;

int N, M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    while(cin >> N >> M){
        if(N == 0 && M == 0)
            break;
        else
            cout << N / M << ' ' << N - (M * (N / M)) << " / " << M <<'\n';
    }
    return 0;
}