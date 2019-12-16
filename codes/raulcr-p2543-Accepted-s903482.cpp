#include <bits/stdc++.h>

using namespace std;

const int MAXN = 13;

int N, M, K, a[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> N >> M >> K){
        for(int i = 0 ; i < N ; i++)
            cin >> a[i];

        int sol = 0;

        for(int i = 1 ; i < (1 << N) ; i++)
            if(__builtin_popcount(i) == M){
                int sum = 0;
                for(int j = 0 ; j < N ; j++)
                    if(i & (1 << j))
                        sum += a[j];
                if(__gcd(sum, K) != 1)
                    sol++;

            }

        cout << sol << '\n';
    }
    return 0;
}
