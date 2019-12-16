#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

const int MAXN = 1005;

vector <double> w[MAXN];
vector <int> lista[MAXN];

int N;
double x[MAXN], y[MAXN], f[MAXN], dp[MAXN];

double dist(int i, int j) {
    int x1 = x[i], x2 = x[j];
    int y1 = y[i], y2 = y[j];
    double a = (x1 - x2), b = (y1 - y2);
    double dst = fabs(sqrt(a * a + b * b) - f[i]) + 1e-9;
    return dst;
}

struct par {
    int to;
    double d;
    par() {}
    par(int a, double b) : to(a), d(b) {}
    bool operator < (const par &a) const {
        return d > a.d;
    }
} ;

priority_queue <par> pq;

int main() {
//    freopen("a.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> x[0] >> y[0];
    cin >> x[N + 1] >> y[N + 1];

    for(int i = 1 ; i <= N ; i++)
        cin >> x[i] >> y[i] >> f[i];

    N++;
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= N; j++) {
            if(i != j) {
                lista[i].push_back(j);
                w[i].push_back(dist(i, j));
            }
        }
    }

    for(int i = 1; i <= N; i++)
        dp[i] = 1e15;

    pq.push(par(0, 0));
    while(!pq.empty()) {
        int c = pq.top().to;
        double ww = pq.top().d;
        pq.pop();
        if(dp[c] != ww)continue;
        for(int i = 0; i < lista[c].size(); i++) {
            int to = lista[c][i];
            double cost = w[c][i];
            if(dp[to] > dp[c] + cost) {
                dp[to] = dp[c] + cost;
                pq.push(par(to, dp[to]));
            }
        }
    }

    cout << setprecision(2) << fixed;
    cout << dp[N] << "\n";
}
