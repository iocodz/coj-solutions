#include <bits/stdc++.h>

using namespace std;

int N, M, T;

int main()
{
    cin >> T;
    while(T--){
        cin >> N >> M;
        if(((N & 1) && (M % 2 == 0)) || ((M & 1) && (N % 2 == 0)))
            cout << (M - N + 1) / 2 << ' ' << (M - N + 1) / 2 << '\n';
        else if((N & 1) && (M & 1))
            cout << (M - N) / 2 << ' ' << (M - N) / 2 + 1 << '\n';
        else
            cout << (M - N) / 2 + 1 << ' ' << (M - N) / 2 << '\n';
    }
    return 0;
}
