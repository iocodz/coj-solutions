#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e4 + 5;

vector<int> grafo[MAX], grafoR[MAX];
stack<int> pila;
bool visit[MAX];
int cmpi;
int cmpDeN[MAX];

void dfs(int u){
    visit[u] = true;
    for(auto x : grafo[u]){
        if(!visit[x]) dfs(x);
    }
    pila.push(u);
}

void dfsR(int u){
    visit[u] = true;
    cmpDeN[u] = cmpi;
    for(auto v : grafoR[u]){
        if(!visit[v]){
            dfsR(v);
        }
    }
}

int inDeg[MAX], outDeg[MAX];

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, M;

    cin >>N >>M;

    cmpi = 0;

    while(M--){
        int a, b; cin >>a >>b;
        grafo[a].push_back(b);
        grafoR[b].push_back(a);
    }

    for(int i = 1; i <= N; i++){
        if(!visit[i]) dfs(i);
    }

    memset(visit, 0, sizeof visit);

    while(!pila.empty()){
        int u = pila.top(); pila.pop();
        if(!visit[u]){
            dfsR(u);
            cmpi++;
        }
    }

    for(int i = 1; i <= N; i++){
        for(auto x : grafo[i]){
            if(cmpDeN[i] != cmpDeN[x]){
                inDeg[ cmpDeN[x] ]++;
                outDeg[ cmpDeN[i] ]++;
            }
        }

    }

    int c1, c2; c1 = c2 = 0;

    for(int i = 0; i < cmpi; i++){
        if(inDeg[i] == 0) c1++;
        if(outDeg[i] == 0) c2++;
    }
    if(cmpi == 1){
        cout <<"0\n";
    }else
        cout <<max(c1, c2) <<"\n";
    return 0;
}

/*
1
6 6
0 1 10
1 2 20
2 3 30
3 0 -60
4 5 0
5 4 0
*/
