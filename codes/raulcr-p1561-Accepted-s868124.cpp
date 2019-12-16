#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e6 + 1;

int N;
LL a, b;
bool pr[MAXN];
int TA[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pr[0] = pr[1] = 1;

    for(int i = 2 ; i < MAXN ; i++){
        TA[i] = TA[i - 1];
        if(!pr[i]){
            for(int j = 2 * i ; j < MAXN ; j += i)
                pr[j] = 1;
            TA[i]++;
        }
    }

    cin >> N;

    while(N--){
        cin >> a >> b;

        int aa = sqrt(a), bb = sqrt(b);

        if(aa == sqrt(a) && !pr[aa])
            cout << TA[bb] - TA[aa] + 1 << '\n';

        else
            cout << TA[bb] - TA[aa] << '\n';
    }
    return 0;
}
