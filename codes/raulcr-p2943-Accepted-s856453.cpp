#include <bits/stdc++.h>

using namespace std;

const int MAXN = 501;

int N;
int ph[MAXN];
vector<int> ad[MAXN];
bool mk[MAXN];

void dfs(int nod){
    if(mk[nod])
        return;

    mk[nod] = true;

    for(int i = 0 ; i < ad[nod].size() ; i++){
        int nn = ad[nod][i];

        if(!mk[nn]){
            ph[nn] = ph[nod];
            dfs(nn);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("a.in", "r", stdin);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> ph[i];

    int a, b;
    while(cin >> a >> b){
        ad[a].push_back(b);
        ad[b].push_back(a);
    }

    for(int i = 1 ; i <= N ; i++)
        if(ph[i])
            dfs(i);

    for(int i = 1 ; i <= N ; i++)
        cout << ph[i] << '\n';

    return 0;
}
