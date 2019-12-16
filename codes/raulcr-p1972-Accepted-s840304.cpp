#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5e5 + 1;

int N, Q;
int k, varsal, id, X, Y; //stree
int sal[MAXN];
int dsmcsal[4 * MAXN];
bool mk[4 * MAXN];
int ini[MAXN], fin[MAXN];
vector<int> ad[MAXN];

struct nod{
    int ini, fin;

    nod(){}

    nod(int a, int b):ini(a), fin(b){}
};

nod ST[4 * MAXN];

void build(int nodo, int a, int b){
    if(a == b){
        ST[nodo].ini = ST[nodo].fin = a;
        return;
    }

    int mit1 = (a + b) / 2;

    build(2 * nodo, a, mit1);
    build(2 * nodo + 1, mit1 + 1, b);

    ST[nodo].ini = ST[2 * nodo].ini;
    ST[nodo].fin = ST[2 * nodo + 1].fin;
}

void update(int nodo){
    if(ST[nodo].ini > Y || ST[nodo].fin < X)
        return;

    if(X <= ST[nodo].ini && Y >= ST[nodo].fin){
        mk[nodo] = true;
        dsmcsal[nodo] += varsal;
        return;
    }

    if(ST[nodo].ini == ST[nodo].fin)
        dsmcsal[nodo] += varsal;

    update(2 * nodo);
    update(2 * nodo + 1);
}

void dfs(int nodo){
    ++k;

    if(!ini[nodo])
        ini[nodo] = k;

    for(int i = 0 ; i < ad[nodo].size() ; i++){
        int nn = ad[nodo][i];
        dfs(nn);
        ++k;
    }

    fin[nodo] = k;
}

int query(int nodo){
    if(ST[nodo].ini > id || ST[nodo].fin < id)
        return 0;

    if(ST[nodo].ini == id && id == ST[nodo].fin)
        return dsmcsal[nodo];

    if(mk[nodo]){
        mk[2 * nodo] = mk[2 * nodo + 1] = true;

        dsmcsal[2 * nodo] += dsmcsal[nodo];
        dsmcsal[2 * nodo + 1] += dsmcsal[nodo];

        dsmcsal[nodo] = 0;
        mk[nodo] = 0;
    }

    int r = query(nodo * 2);
    int r1 = query(nodo * 2 + 1);

    return r + r1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("data.in", "r", stdin);
//    freopen("data.out", "w", stdout);

    cin >> N >> Q;

    cin >> sal[1];

    for(int i = 2 ; i <= N ; i++){
        int ph;
        cin >> sal[i] >> ph;

        ad[ph].push_back(i);
    }

    dfs(1);
    build(1, 1, k);

    for(int i = 1 ; i <= Q ; i++){
        string a;
        cin >> a;

        if(a[0] == 'C'){
            int b, c;
            cin >> b >> c;

            X = ini[b] + 1;
            Y = fin[b] - 1;

            varsal = c;

            update(1);
        }

        else{
            int t;
            cin >> t;

            id = ini[t];

            cout << query(1) + sal[t] << '\n';
        }
    }


    return 0;
}
