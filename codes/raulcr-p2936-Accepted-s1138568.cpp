#include <bits/stdc++.h>

using namespace std;

long long N, M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin >> N >> M){
        cout << "Triangles: " << (N * (N - 1) / 2 * M) + (M * (M - 1) / 2 * N) << '\n';
        cout << "Quadrilaterals: " << (N * (N - 1) / 2 * M *(M - 1) / 2) << '\n';
        cout << '\n';
    }
    return 0;
}
