///by el Rauli

#include <bits/stdc++.h>

using namespace std;

long long T, N, M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T >> M;

    while (T--){
          cin >> N;

          cout << (N * N) % M << '\n';
    }

    return 0;
}
