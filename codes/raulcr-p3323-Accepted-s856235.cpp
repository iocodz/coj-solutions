#include <bits/stdc++.h>

using namespace std;

long long N, M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> N >> M && N != 0){
        N--;
        cout << (M - (long long)sqrtl(M)) - (N - (long long)sqrtl(N)) << '\n';
    }

    return 0;
}
