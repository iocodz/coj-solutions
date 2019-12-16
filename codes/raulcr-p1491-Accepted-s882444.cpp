#include <bits/stdc++.h>

using namespace std;

const int MAXN = 11;
const int MAXM = 1e5 + 1;

typedef pair<int, int> pii;
typedef pair<double, int> pid;
typedef pair<double, pii> pii3;

int N, M, K, in, fi;
vector<pii3> ad[MAXN];
double sol[MAXN];
bool mk[MAXM];

double dijks(){
    priority_queue<pid, vector<pid>, greater<pid> > Q;
    Q.push(pid(0, in));
    fill(sol, sol + MAXN, (1 << 30));
    sol[in] = 0;

    while(!Q.empty()){
        int nod = Q.top().second;
        double cost = Q.top().first;

        Q.pop();

        for(int i = 0 ; i < ad[nod].size() ; i++){
            int id = ad[nod][i].second.second;
            double nc = cost + ad[nod][i].first;
            int nn = ad[nod][i].second.first;

            if(mk[id])
                continue;

            if(sol[nn] > nc){
                sol[nn] = nc;
                Q.push(pid(nc, nn));
            }
        }
    }
    return sol[fi];
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K >> in >> fi;

    for(int i = 1 ; i <= M ; i++){
        int a, b, c;
        double d;
        cin >> a >> b >> c >> d;

        ad[b].push_back(pii3(d, pii(c, a)));
        ad[c].push_back(pii3(d, pii(b, a)));
    }

    for(int i = 1 ; i <= K ; i++){
        int a;
        cin >> a;
        mk[a] = true;
    }

    printf("%.2lf", dijks());
    return 0;
}
