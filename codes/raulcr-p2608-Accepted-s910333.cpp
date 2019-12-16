#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL a, b;
map<LL, LL> mp;

LL g(LL k){
    if(k == 1LL) return 1;
    if(mp.find(k) == mp.end()){
        LL a = g(k / 2) * 2 + k - k / 2;
        mp[k] = a;
    }
    return mp[k];
}

LL f(LL k){
    if(k == 0LL) return 0LL;
    if(mp.find(k) == mp.end()){
        LL p = 1;
        while(p <= k)
            p = p * 2 + 1;
        p = (p - 1) / 2;

        if(p == k)
            return g(k);

        LL a = k - p + f(k - p - 1) + g(p);
        mp[k] = a;
    }
    return mp[k];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;
    a = f(a - 1);
    b = f(b);
    cout << b - a;
    return 0;
}
