#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int N, M;

LL back(int a, int b, int c){
    if(c == 1)
        if(a == 1)
            return 4LL;
        else
            return 5LL;

    LL ret = 0LL;

    if(a > 0)
        ret = back(a - 1, b, c - 1) * 5;
    if(b > 0)
        ret += back(a, b - 1, c - 1) * 5;
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> N >> M && (N || M)){
        if(N == 1 && M == 0)
            cout << 9 << '\n';
        else
            cout << back(N, M, N + M) * 2LL << '\n';
    }
    return 0;
}
