#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define X real()
#define Y imag()

const int MAX = 1e5 + 5;
const int EPS = 0;

typedef complex <int> P;

int s, k, w;
int xchama[MAX], ychama[MAX], xpared[MAX][2], ypared[MAX][2];

struct L {
    P a, b;
    L() {}
    L(P aa, P bb) : a(aa), b(bb) {}
} ;

inline ll cross(P a, P b) {
    ll v1 = 1ll * a.X * b.Y;
    ll v2 = 1ll * a.Y * b.X;
    return v1 - v2;
}

inline int ccw(P a, P b, P c) {
    ll d = cross(b - a, c - a);
    if(d > EPS)return +1;
    if(d < EPS)return -1;
    return 0;
}

inline bool intersectSS(L s, L t) {
    if(s.a == t.a || s.a == t.b || s.b == t.a || s.b == t.b)
        assert(1);
    if(ccw(s.a, s.b, t.a) * ccw(s.a, s.b, t.b) > 0)
        return 0;
    return ccw(t.a, t.b, s.a) * ccw(t.a, t.b, s.b) <= 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s >> k >> w;

    for(int i = 1; i <= k; i++)
        cin >> xchama[i] >> ychama[i];

    for(int i = 1; i <= w; i++)
        cin >> xpared[i][0] >> ypared[i][0] >> xpared[i][1] >> ypared[i][1];

    for(int i = 1; i <= s; i++) {
        int sol = 0;
        for(int j = 1; j <= k; j++) {
            if(i == j)continue;
            bool se_ve = 1;
            for(int m = 1; m <= w; m++) {
                if(intersectSS(L(P(xchama[i], ychama[i]), P(xchama[j], ychama[j])), L(P(xpared[m][0], ypared[m][0]), P(xpared[m][1], ypared[m][1])))) {
                    se_ve = 0;
                    break;
                }
            }
            sol += se_ve;
        }
        cout << sol << "\n";
    }
}