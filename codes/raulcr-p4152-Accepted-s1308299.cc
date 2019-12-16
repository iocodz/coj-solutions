#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, k; cin >>a >>b >>k;

    ll sol1 = 0, sol2 = 0;

    if(b / k >= 1) sol1 += a / k;
    if(b / k >= 2) sol1 += a / k;
    if(b / k >= 3) sol1 +=( (b - 2*k) / k ) * 2;

    swap(a, b);

    if(b / k >= 1) sol2 += a / k;
    if(b / k >= 2) sol2 += a / k;
    if(b / k >= 3) sol2 +=( (b - 2*k) / k ) * 2;

    cout <<min(sol1, sol2) <<"\n";

    return 0;
}
