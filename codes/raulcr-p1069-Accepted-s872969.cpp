#include <bits/stdc++.h>

using namespace std;

int N, M, K, L;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M >> K >> L;

        if(L == 1 || M + K == 0){
            cout << "0\n";
            continue;
        }

        int sol = M + K;
        int s = 0;

        while(sol >= L){
            s += sol / L;
            sol = (sol / L) + (sol % L);
        }

        cout << s << '\n';
    }
    return 0;
}
