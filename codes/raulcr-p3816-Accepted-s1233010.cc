#include <bits/stdc++.h>

using namespace std;

typedef pair<double, double> pii;
typedef pair<double, int> pii3;

const int MAXN = 101;

int N, M;
pii c[MAXN];
double dist[MAXN][MAXN];
bool mk[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        double a, b;
        cin >> a >> b;
        c[i] = pii(a, b);
    }

    for(int i = 1 ; i <= N ; i++){
        dist[i][0] = 1e8;
        for(int j = 1 ; j <= N ; j++){
            double dx = c[i].first - c[j].first;
            double dy = c[i].second - c[j].second;
            dx *= dx;
            dy *= dy;
            dist[i][j] = sqrt(dx + dy);
        }
    }
    double sol = 0.0;
    priority_queue<pii3, vector<pii3>, greater<pii3> > Q;
    Q.push(pii3(0.0, 1));

    while(Q.size()){
        pii3 now = Q.top();
        Q.pop();

        if(mk[now.second]) continue;

        mk[now.second] = 1;
        sol += now.first;

        for(int j = 1 ; j <= N ; j++){
            if(j != now.second){
                Q.push(pii3(dist[now.second][j], j));
            }
        }
    }

    cout.precision(2);
    cout << fixed << sol;
    return 0;

}

