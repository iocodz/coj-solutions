///by taskkill
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1001;

int N, M, sol;
vector<pii> ad[MAXN];
bool mk[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i = 1 ; i <= M ; i++){
        int a, b, c;
        cin >> a >> b >> c;

        ad[a].push_back(pii(c, b));
        ad[b].push_back(pii(c, a));
    }

    priority_queue<pii> Q;
    Q.push(pii(0, 1));

    while(!Q.empty()){
        int nod = Q.top().second;
        int c = Q.top().first;

        Q.pop();

        if(mk[nod])
            continue;

        mk[nod] = true;
        sol += c;

        for(int i = 0 ; i < ad[nod].size() ; i++)
            if(!mk[ad[nod][i].second])
                Q.push(ad[nod][i]);
    }

    bool f = true;
    for(int i = 1 ; f && i <= N ; i++)
        if(!mk[i])
            f = false;

    if(f)
        cout << sol;
    else
        cout << -1;

    return 0;
}
