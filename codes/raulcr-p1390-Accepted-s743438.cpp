#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int N, M;
pii sol;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    sol = make_pair(0, 0);

    int maxim = 0;

    while(N--){
        cin >> M;

        int cop = M, ma = 0;

        for(int j = 2 ; j * j <= M ; j++){
            if(M % j == 0) {
                while(M % j == 0)
                    M /= j;
                if(j > ma)
                    ma = j;
            }
        }

        if(M > ma)
            ma = M;

        if(ma > sol.second)
            sol = make_pair(cop, ma);
    }

    cout << sol.first;

    return 0;
}
