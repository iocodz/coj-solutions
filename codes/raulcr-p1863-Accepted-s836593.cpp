#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

typedef long long LL;
typedef pair<LL, LL> pll;

int N;
LL D;
pll pc[MAXN];

int main()
{
    //freopen("01.in", "r", stdin);
    //freopen("cbuying.out", "w", stdout);

    cin >> N >> D;

    for(int i = 1 ; i <= N ; i++)
        cin >> pc[i].first >> pc[i].second;

    sort(pc + 1, pc + 1 + N);

    LL sol = 0;

    for(int i = 1 ; i <= N ; i++){
        LL k = D / pc[i].first;

        if(k >= pc[i].second){
            D -= (pc[i].first * pc[i].second);
            sol += pc[i].second;
        }

        else{
            D -= (k * pc[i].first);
            sol += k;
        }
    }

    cout << sol;

    return 0;
}
