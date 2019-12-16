#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;
int N, S;
int X[MAXN];
int Y[MAXN];
const int MAXL = 20;
typedef pair<int, int> par;
typedef long long big;
big Costo[MAXN][MAXL];
int LCA[MAXN][MAXL];
int level[MAXN];

struct pii{
    int next;
    big cos;

    pii(){}

    pii(int x, big c) : next(x), cos(c){}
};

inline big Manhatan(par x, par y){
    return (big)(abs(x.first - y.first) + abs(x.second - y.second));
}

vector <pii> Adlist[MAXN];


void longest_common_ancestor(){
    queue<int> cola;

    cola.push(1);
    level[1] = 1;

    while(!cola.empty()){
        int nodo = cola.front();
        cola.pop();

        for(int i = 0; i < Adlist[nodo].size(); i++){
            int nn = Adlist[nodo][i].next;
            big ncost = Adlist[nodo][i].cos;

            if(level[nn])
                continue;

            cola.push(nn);
            level[nn] = level[nodo] + 1;
            Costo[nn][0] = ncost;
            LCA[nn][0] = nodo;

            int fin = log2(level[nn]);
            for(int i = 1; i <= fin; i++){
                if(LCA[nn][i - 1]){
                    LCA[nn][i] = LCA[LCA[nn][i - 1]][i - 1];
                    Costo[nn][i] = Costo[nn][i - 1] + Costo[LCA[nn][i - 1]][i - 1];
                }
            }
        }
    }
}

pii Query(int n1, int n2){
    if(level[n2] > level[n1])
        swap(n1, n2);

    int fin = log2(level[n1]);
    big dist = 0LL;
    for(int i = fin; i >= 0; i--){
        if(level[n1] - (1 << i) >= level[n2] && LCA[n1][i]){
            dist += Costo[n1][i];
            n1 = LCA[n1][i];
        }
    }

    if(n1 == n2)
        return pii(n1, dist);

    fin = log2(level[n1]);

    for(int i = fin; i >= 0; i--){
        if(LCA[n1][i] != LCA[n2][i] && LCA[n1][i]){
            dist += Costo[n1][i] + Costo[n2][i];
            n1 = LCA[n1][i];
            n2 = LCA[n2][i];
        }
    }

    return pii(LCA[n1][0], dist + Costo[n1][0] + Costo[n2][0]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> S;

    for(int i = 1; i <= N; i++)
        cin >> X[i] >> Y[i];

    for(int i = 1; i < N; i++){
        int a, b;
        cin >> a >> b;

        int cs = Manhatan(par(X[a], Y[a]), par(X[b], Y[b]));
        Adlist[a].push_back(pii(b, cs));
        Adlist[b].push_back(pii(a, cs));
    }

    longest_common_ancestor();

    int maxciclo = -1;
    big distmax = -1;
    int optimalsugf = 0;
    for(int i = 0; i < S; i++){
        int n1, n2;

        cin >> n1 >> n2;

        pii aux = Query(n1, n2);

        int actual = ((level[n1] + level[n2]) - 2 * level[aux.next]) + 1;
        big actdist = aux.cos + Manhatan(par(X[n1], Y[n1]), par(X[n2], Y[n2]));
        if(actual > maxciclo){
            distmax = actdist;
            optimalsugf = 1;
            maxciclo = actual;
        }
        else if(actual == maxciclo){
            if(distmax == actdist)
                optimalsugf++;
            else if(actdist < distmax){
                distmax = actdist;
                optimalsugf = 1;
            }
        }
    }


    cout << "Markets: " << maxciclo<<'\n';
    cout << "Route Lenght: " << distmax <<'\n';
    cout << "Number of optimal suggestions: " << optimalsugf <<'\n';

    return 0;
}
