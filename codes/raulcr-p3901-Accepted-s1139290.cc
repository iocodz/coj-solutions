#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 15;

ll x[MAX], y[MAX];

bool solve2(ll a, ll b, ll c, ll d) {
    return a >= c && b >= d;
}

bool solve(ll a, ll b) {
    ll dx1 = x[2] - x[0];
    ll dx2 = x[1] - x[3];
    ll dy1 = y[2] - y[0];
    ll dy2 = y[1] - y[3];
    ll h = y[1] - y[0];
    ll w = x[1] - x[0];
    return solve2(dx1, h, a, b) || solve2(w, dy1, a, b) || solve2(dx2, h, a, b) || solve2(w, dy2, a, b);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(ll i = 0; i < 5; i++)
        cin >> x[i] >> y[i];

    if(solve(x[4], y[4]))
        cout << "Yes\n";
    else
        cout << "No\n";
}
/*
7 3 2 2 3 1
*/
