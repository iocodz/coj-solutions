#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 6;

LL m[MAXN];

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    while(N--){
        for(int i = 0 ; i < 6 ; i++)
            cin >> m[i];

        bool sol = 0;

        for(int mask = 1 ; !sol && mask < (1 << 6) ; mask++){
            int sum1 = 0, sum2 = 0;
            for(int bit = 0 ; bit < 6 ; bit++){
                if(mask & (1 << bit))
                    sum1 += m[bit];
                else
                    sum2 += m[bit];
            }
            if(sum1 == sum2)
                sol = 1;
        }

        if(sol)
            cout << "Tobby puede cruzar\n";
        else
            cout << "Tobby no puede cruzar\n";
    }

    return 0;
}
