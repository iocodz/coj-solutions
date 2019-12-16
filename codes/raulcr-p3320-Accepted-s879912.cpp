#include <bits/stdc++.h>

using namespace std;
using namespace __gnu_cxx;

typedef vector<int> :: iterator it;
typedef long long LL;

const int MAXN = 1e9;

LL sol, N, M;

vector<int> c2p;

void preprocss(){
    int i = 1;
    while(i * i <= MAXN){
        c2p.push_back(i * i);
        i++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    preprocss();
    while(cin >> N >> M && (N && M)){
        long long sm, sn1;
        sm = M * (M + 1) / 2;
        sn1 = N * (N - 1) / 2;

        int i = lower_bound(c2p.begin(), c2p.end(), N) - c2p.begin();
        int f = upper_bound(c2p.begin(), c2p.end(), M) - c2p.begin();

        sol = sm - sn1;

        while(i != f)
            sol -= c2p[i] , i++;

        cout << sol << '\n';

        sol = 0LL;
    }

    return 0;
}
