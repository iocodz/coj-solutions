#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 20001;

int T, N, M, m, can, sol;
vector<int> ad[MAXN];
bool mk[MAXN];

void dis(){
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Q.push(pii(0, 1));
    mk[1] = true;

    while(!Q.empty()){
        int nod = Q.top().second;
        int c = Q.top().first;

        Q.pop();

        if(c > sol){
            sol = c;
            can = 1;
            m = nod;
        }

        else if(c == sol){
            can++;
            m = min(m, nod);
        }

        for(int i = 0 ; i < ad[nod].size() ; i++){
            int nn = ad[nod][i];

            if(mk[nn])
                continue;

            Q.push(pii(c + 1, nn));
            mk[nn] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N >> M;
        for(int i = 1 ; i <= M ; i++){
            int a, b; cin >> a >> b;
            ad[a].push_back(b);
            ad[b].push_back(a);
        }

        dis();

        cout << m << ' ' << sol << ' ' << can << '\n';

        m = sol = can = 0;
        for(int i = 1 ; i <= N ; i++)
            ad[i].clear();
        memset(mk, 0, sizeof mk);
    }

    return 0;
}
