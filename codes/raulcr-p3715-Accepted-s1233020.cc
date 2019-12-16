#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 2000;

int N, M;
vector<pii> ad[MAXN];
bool mk[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(true){
        cin >> N >> M;

        if(!N && !M) break;

        for(int i = 1 ; i <= N ; i++){
            mk[i] = 0;
            ad[i].clear();
        }

        int minimo = 0;
        for(int i = 1 ; i <= M ; i++){
            int a, b, c;
            cin >> a >> b >> c;
            minimo = max(minimo, c);
            a++, b++;
            ad[a].push_back(pii(b, c));
            ad[b].push_back(pii(a, c));
        }

        priority_queue<pii, vector<pii>, less<pii> > Q;
        Q.push(pii(minimo, 1));

        while(Q.size()){
            pii now = Q.top();
            Q.pop();

            if(mk[now.second]) continue;

            mk[now.second] = 1;
            minimo = min(minimo, now.first);

            for(int j = 0 ; j < ad[now.second].size() ; j++){
                Q.push(pii(ad[now.second][j].second, ad[now.second][j].first));
            }
        }

        int c = count(mk + 1, mk + 1 + N, true);

        if(c != N) cout << "IMPOSSIBLE\n";
        else cout << minimo << '\n';

    }
    return 0;

}

