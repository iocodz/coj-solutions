#include <bits/stdc++.h>

using namespace std;

const int maxn = 3e5 + 1;

int n, m;
long long sol;
int k[21], l[maxn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("malcom.in", "r", stdin);
//    freopen("malcom.out", "w", stdout);

    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        string a; cin >> a;
        l[i] = a.size();
    }

    for(int i = 1 ; i <= m + 1 ; i++){
        k[l[i]]++;
        if(k[l[i]] > 1)
            sol += k[l[i]] - 1;
    }

    for(int i = m + 2 ; i <= n ; i++){
        k[l[i - (m + 1)]]--;
        k[l[i]]++;
        if(k[l[i]] > 1)
            sol += k[l[i]] - 1;
    }

    cout << sol;

    return 0;
}
