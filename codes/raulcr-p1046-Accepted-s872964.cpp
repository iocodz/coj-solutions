#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MOD = 100;

int N, A, B;
LL S;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> A >> B;

        for(int i = A ; i <= B ; i++)
            S += i * (i + 1) * (i + 2);

        cout << S % MOD << '\n';

        S = false;
    }
    return 0;
}
