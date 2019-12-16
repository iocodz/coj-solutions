#include <bits/stdc++.h>

using namespace std;

const int MAX = 5e5 + 5;

typedef pair<int, int> pii;

vector<int> grafo[MAX];
int pa[MAX];
int flag[MAX];
int deg[MAX];

void dfs(){
    stack<pii> pila;
    pila.push(pii(1, 1));
    while(pila.size()){
        int u = pila.top().first, p = pila.top().second;
        pila.pop();
        pa[u] = p;
        for(auto v : grafo[u])
            if(!pa[v])
                pila.push(pii(v, u));
    }
}


int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N; cin >>N;

    for(int i = 1; i < N; i++){
        int u, v; cin >>u >>v;
        deg[u]++;
        deg[v]++;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    dfs();

    pa[1] = 0;

    int Q; cin >>Q;

    int sol = 1;

    while(Q--){
        int a; cin >>a;

        if(a < 0){
            a = -a;
            sol -= deg[a] - 1 - (flag[ pa[a] ] == -1);
            deg[ pa[a] ]++;
            flag[a] = 0;
        }else{
            sol += deg[a] - 1 - (flag[ pa[a] ] == -1);
            deg[ pa[a] ]--;
            flag[a] = -1;
        }

        cout <<sol <<"\n";
    }

    return 0;
}
