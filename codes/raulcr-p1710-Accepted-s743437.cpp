#include <bits/stdc++.h>

using namespace std;

int N, M;
set<int> S;

bool prime(int a){
    if(a == 2)
        return 1;
    if(a < 2)
        return 0;
    if(a % 2 == 0)
        return 0;
    for(int i = 3 ; i * i <= a ; i++)
        if(a % i == 0)
            return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        int sol = 0;

        for(int j = 2 ; j * j <= M ; j++){
            if(M % j == 0) {
                while(M % j == 0)
                    M /= j;
                sol++;
            }
        }

        if(M > 1)
            sol++;

        cout << sol << '\n';
    }

    return 0;
}
