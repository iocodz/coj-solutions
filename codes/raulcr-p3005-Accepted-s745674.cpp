#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50001;

int N, M, cj, cf;
vector<int> adlis[MAXN];
bool mk[MAXN];
bool Let[MAXN];
bool bro;

void bfs(int nod){
    queue<int> Q;
    Q.push(nod);

    int cpj = 1, cpf = 0;

    mk[nod] = true;
    Let[nod] = 1;

    while(!Q.empty()){
        int n = Q.front();

        Q.pop();

        for(int i = 0 ; i < adlis[n].size() ; i++){
            int nn = adlis[n][i];

            if(!mk[nn]){
                Q.push(nn);
                mk[nn] = true;
                Let[nn] = !Let[n];
                if(Let[nn])
                    cpj++;
                else
                    cpf++;
            }
            else if(Let[nn] && Let[n]){
                bro = true;
                return;
            }
        }
    }

    if(cpj > cpf)
        cj += cpj;

    else
        cj += cpf;

}

int main()
{
    cin >> N >> M;

    for(int i = 1 ; i <= M ; i++){
        int a, b;
        cin >> a >> b;
        adlis[a].push_back(b);
        adlis[b].push_back(a);
    }

    for(int i = 1 ; i <= N ; i++){
        if(!mk[i])
            bfs(i);
        if(bro){
            cout << -1;
            return 0;
        }
    }

    if(cj > N - cj)
        cout << cj;
    else
        cout << N - cj;

    return 0;
}
