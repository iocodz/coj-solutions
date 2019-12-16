#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 2001;

int N, M;
vector<int> ad[MAXN];
bool mk[MAXN];

bool bfs(int a, int b){
    queue<int> q;
    q.push(a);

    mk[a] = 1;

    while(q.size()){
        int now = q.front();
        q.pop();

        for(int i = 0 ; i < ad[now].size() ; i++){
            int nod = ad[now][i];
            if(!mk[nod]){
                mk[nod] = 1;
                q.push(nod);
            }
        }
    }
    bool sol = mk[b];

    fill(mk, mk + MAXN, 0);

    return sol;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int Q;
    cin >> N >> M >> Q;

    for(int i = 1 ; i <= M ; i++){
        int a, b;
        cin >> a >> b;
        ad[a].push_back(b);
        ad[b].push_back(a);
    }

    while(Q--){
        int a, b;
        cin >> a >> b;

        if(bfs(a, b)) cout << "Y\n";
        else cout << "N\n";
    }
    return 0;

}

