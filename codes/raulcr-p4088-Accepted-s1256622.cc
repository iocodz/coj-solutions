#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1e6 + 5;

int N, M;
bool red[MAXN], mk[MAXN], mkaux[MAXN];
vector<int> ad[MAXN];

int solve(int k){
    queue<pii> Q;
    Q.push(pii(1, k));
    mkaux[k] = true;

    int mnod = k, mcost = 1;

    while(!Q.empty()){
        int nodo = Q.front().second;
        int cost = Q.front().first;

        Q.pop();

        if(cost > mcost){
            mnod = nodo;
            mcost = cost;
        }

        for(int i = 0 ; i < ad[nodo].size() ; i++){
            int nn = ad[nodo][i];

            if(!mkaux[nn] && red[nn]){
                Q.push(pii(cost + 1, nn));
                mkaux[nn] = true;
            }
        }
    }

    while(!Q.empty()) Q.pop();

    Q.push(pii(1, mnod));
    mcost = 1;
    mk[mnod] = true;

    while(!Q.empty()){
        int nodo = Q.front().second;
        int cost = Q.front().first;

        Q.pop();

        if(cost > mcost) mcost = cost;

        for(int i = 0 ; i < ad[nodo].size() ; i++){
            int nn = ad[nodo][i];

            if(red[nn] && !mk[nn]){
                Q.push(pii(cost + 1, nn));
                mk[nn] = true;
            }
        }
    }
    return mcost;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    int a, b;
    for(int i = 1 ; i <= M ; i++){
        cin >> a;

        red[a] = true;
    }

    for(int i = 1 ; i < N ; i++){
        cin >> a >> b;
        if(red[a] == red[b] && red[b] == true){
            ad[a].push_back(b);
            ad[b].push_back(a);
        }
    }

    int maxs = 0;

    for(int i = 1 ; i <= N ; i++)
        if(red[i] && !mk[i]){
            a = solve(i);
            if(a > maxs)
                maxs = a;
        }

    cout << maxs << '\n';

    return 0;
}
