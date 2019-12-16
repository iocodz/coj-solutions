#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2001;

int N, M;
int F[MAXN];
bool mk[MAXN];
vector<int> adlis[MAXN];

bool Dijkstra(int ni, int nf){
    priority_queue<int, vector<int>, greater<int> > Q;
    Q.push(ni);

    memset(mk, 0, sizeof(mk));

    while(!Q.empty()){
        int n = Q.top();

        Q.pop();

        if(mk[n])
            continue;

        mk[n] = true;

        if(n == nf)
            return true;

        for(int i = 0 ; i < adlis[n].size() ; i++){
            int nn = adlis[n][i];

            if(!mk[nn])
                Q.push(nn);
        }
    }
    return false;
}

int main()
{
    while(cin >> N >> M){

        if(N == 0 && M == 0)
            return 0;

        for(int i = 0 ; i < M ; i++){
            int a, b, c;
            cin >> a >> b >> c;

            adlis[a].push_back(b);
            F[a]++;

            if(c == 2){
                adlis[b].push_back(a);
                F[b]++;
            }
        }

        for(int i = 1 ; i <= N ; i++)
            if(!F[i]){
                cout << 0 << '\n';
                goto A;
            }

        for(int i = 2 ; i <= N ; i++){
            int D = Dijkstra(1, i);
            if(!D){
                cout << "0\n";
                goto A;
            }
            D = Dijkstra(i, 1);
            if(!D){
                cout << "0\n";
                goto A;
            }
        }

        cout << "1\n";


        A:
        memset(mk, 0, sizeof(mk));
        memset(F, 0, sizeof(F));
        for(int i = 1 ; i <= N ; i++)
            adlis[i].clear();
    }
    return 0;
}
