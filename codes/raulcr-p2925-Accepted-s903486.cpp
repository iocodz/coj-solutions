#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 7;

int N, M, K;
bool mk[MAXN];
int c[MAXN];

int bfs(){
    queue<int> Q;
    Q.push(M);

    memset(mk, 0, sizeof mk);
    memset(c, 0, sizeof c);

    mk[M] = true;
    c[M] = 0;

    while(!Q.empty()){
        int nod = Q.front();
        Q.pop();

        if(nod == K)
            return c[K];

        if(!mk[nod + 1]){
            Q.push(nod + 1);
            c[nod + 1] = c[nod] + 1;
            mk[nod + 1] = true;
        }

        if(!mk[nod >> 1]){
            Q.push(nod >> 1);
            c[nod >> 1] = c[nod] + 1;
            mk[nod >> 1] = true;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    while(N--){
        cin >> M >> K;

        cout << bfs() << '\n';
    }
    return 0;
}
