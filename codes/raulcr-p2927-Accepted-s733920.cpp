#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;
vector<int> adl[MAXN];
int N, M;
typedef pair<int, int> pii;
bool mk[MAXN];
bool col[MAXN];

bool bfs(int n){
    queue<pii> Q;
    Q.push(make_pair(n, 0));
    mk[1] = true;

    while(!Q.empty()){
        int nod = Q.front().first;
        int c = Q.front().second;
        Q.pop();

        for(int i = 0 ; i < adl[nod].size() ; i++){
            int nn = adl[nod][i];
            int nc = !c;

            if(!mk[nn]){
                mk[nn] = true;
                col[nn] = nc;
                Q.push(make_pair(nn, nc));
            }
            else if(col[nn] != nc)
                return 0;
        }
    }
    return 1;
}

int main()
{
    cin >> N >> M;

    for(int i = 1 ; i <= M ; i++){
        int a, b;
        cin >> a >> b;

        adl[a].push_back(b);
        adl[b].push_back(a);
    }

    if(bfs(1))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
