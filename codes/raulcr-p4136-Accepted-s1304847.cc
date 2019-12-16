#include <bits/stdc++.h>

using namespace std;

const int MAX = 800;
const int INF = 1e9;

namespace flow{

    typedef tuple<int, int, int, int> edge;

    int N, h[MAX], prev[MAX], best[MAX];
    vector<int> ady[MAX];
    vector<edge> E;

    void init(int _N){
        N = _N;
        E.clear();
        for(int i = 0;  i < MAX ; i++)
            ady[i].clear();
    }

    void add_edge(int u, int v, int cap, int cost){
        ady[u].push_back(E.size());
        E.push_back(edge(u, v, cap, cost));
        ady[v].push_back(E.size());
        E.push_back(edge(v, u, 0, -cost));
    }

    void bellman_ford(int s){
        memset(h, 127, sizeof h);
        h[s] = 0;
        for(int i = 0 ; i <= N ; i++){
            for(auto e : E){
                int u, v, f, c; tie(u, v, f, c) = e;
                if(f > 0) h[v] = min(h[v], h[u] + c);
            }
        }
    }

    bool dijkstra(int s, int t){
        memset(prev, -1, sizeof prev);
        memset(best, 127, sizeof best);

        prev[s] = -2; best[s] = 0;
        priority_queue<pair<int, int> > cola;
        cola.push(make_pair(0, s));
        while(!cola.empty()){
            int u, w; tie(w, u) = cola.top(); cola.pop();

            if(best[u] < -w) continue;

            for(auto e: ady[u]){
                int u, v, f, c; tie(u, v, f, c) = E[e];
                int cost = best[u] + h[u] - h[v] + c;
                if(f > 0 && cost < best[v]){
                    best[v] = cost; prev[v] = e;
                    cola.push(make_pair(-best[v], v));
                }
            }
        }
        return prev[t] != -1;
    }

    pair<int, int> max_flow(int s, int t){
        int ans_flow = 0, ans_cost = 0;
        bellman_ford(s);
        while(dijkstra(s, t)){
            for(int i = 0 ; i <= N ; i++){
                if(best[i] == INF) h[i] = INF;
                else if(h[i] < INF) h[i] += best[i];
            }
            int flow = INF;
            for(int v, idx=prev[t]; idx>=0;v=get<0>(E[idx]), idx=prev[v]){
                int cap = get<2>(E[idx]); flow = min(flow, cap);
            }
            for(int v, idx=prev[t]; idx>=0;v=get<0>(E[idx]), idx=prev[v]){
                int cost = get<3>(E[idx]);
                get<2>(E[idx]) -= flow;
                get<2>(E[idx ^ 1]) += flow;
                ans_cost += flow * cost;
            }
            ans_flow += flow;
        }
        return make_pair(ans_flow, ans_cost);
    }
};

int N;

int SRC = 1;
int SNK = 2;

int idS(int x){
    return x + 2;
}

int idN(int x){
    return x + 205;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >>N;

    for(int i = 1; i <= N; i++){
        flow::add_edge(SRC, idS(i), 1, 0);
        int a, b, c, d; cin >>a >>b >>c >>d;

        for(int j = b; j <= c; j++){
            flow::add_edge(idS(i), idN(j), 1, abs(j - a)*d);
        }
        flow::add_edge(idN(i), SNK, 1, 0);
    }

    pair<int, int> res = flow::max_flow(SRC, SNK);

    if(res.first != N){
        cout <<"NIE\n";
    }else{
        cout <<res.second <<"\n";
    }


    return 0;
}
