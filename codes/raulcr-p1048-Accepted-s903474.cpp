///by taskkill
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 201;

int N, M;
int T[MAXN];

void prec(){
    for(int i = 0 ; i < MAXN ; i++)
        for(int j = 0 ; j < MAXN ; j++)
            for(int k = 0 ; k < MAXN ; k++){
                int p = __gcd(__gcd(i, j), k);

                if(p != 1)
                    continue;

                int mx = max(i, max(j, k));

                T[mx]++;
            }

    for(int i = 1 ; i < MAXN ; i++)
        T[i] += T[i - 1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    prec();

    cin >> N;

    while(N--){
        cin >> M;

        cout << T[M] << '\n';
    }

    return 0;
}
