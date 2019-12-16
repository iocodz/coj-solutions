#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 1;

int N, M, K;
vector<int> ad[MAXN];
bool mk[MAXN];

void dfs(int nod){
    if(mk[nod]){
        return;
    }
    mk[nod] = 1;

    for(int i = 0 ; i < ad[nod].size() ; i++){
        dfs(ad[nod][i]);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> N >> M >> K;
        for(int i = 1 ; i <= M ; i++){
            int a, b; cin >> a >> b;
            ad[a].push_back(b);
        }
        for(int i = 1 ; i <= K ; i++){
            int a;
            cin >> a;
            dfs(a);
        }
        int sol = 0;
        for(int i = 1; i <= N ; i++){
            sol += mk[i];
            mk[i] = 0;
            ad[i].clear();
        }

        cout << sol << '\n';
    }
    return 0;
}
