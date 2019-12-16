#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MOD = 1e9 + 9;
const int MAXN = 1e6 + 1;

struct pos{
    int ini, fin;
    LL st;
};

int N, M, X, Y, mul;
pos ST[4 * MAXN];
LL LP[4 * MAXN];

void build(int nod, int in, int fi){
    if(in == fi){
        ST[nod].ini = ST[nod].fin = in;
        LP[nod] = ST[nod].st = 1;
        return;
    }

    int mt = (in + fi) / 2;

    build(2 * nod, in, mt);
    build(2 * nod + 1, mt + 1, fi);

    ST[nod].ini = ST[2 * nod].ini;
    ST[nod].fin = ST[2 * nod + 1].fin;
    ST[nod].st = (ST[2 * nod].st + ST[2 * nod + 1].st) % MOD;
    LP[nod] = 1;
}

void laz(int nod){
    if(ST[nod].ini == ST[nod].fin){
        LP[nod] = 1;
        return;
    }

    ST[2 * nod].st = (ST[2 * nod].st * LP[nod]) % MOD;
    ST[2 * nod + 1].st = (ST[2 * nod + 1].st * LP[nod]) % MOD;
    LP[2 * nod] = (LP[nod] * LP[2 * nod]) % MOD; //probar aqui sin mod que no toy seguro
    LP[2 * nod + 1] = (LP[nod] * LP[2 * nod + 1]) % MOD;
    LP[nod] = 1;
}

void update(int nod){
    if(Y < ST[nod].ini || X > ST[nod].fin)
        return;

    if(LP[nod] != 1)
        laz(nod);

    if(X <= ST[nod].ini && Y >= ST[nod].fin){
        ST[nod].st = (ST[nod].st * mul) % MOD;
        LP[nod] = mul;
        return;
    }

    update(2 * nod);
    update(2 * nod + 1);

    ST[nod].st = (ST[nod * 2].st + ST[nod * 2 + 1].st) % MOD;
}

LL query(int nod){
    if(Y < ST[nod].ini || X > ST[nod].fin)
        return 0;

    if(LP[nod] != 1)
        laz(nod);

    if(X <= ST[nod].ini && Y >= ST[nod].fin)
        return ST[nod].st;

    LL r1 = query(2 * nod);
    LL r2 = query(2 * nod + 1);

    return (r1 + r2) % MOD;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> N >> M){
        build(1, 1, N);

        for(int i = 1 ; i <= M ; i++){
            int a;
            cin >> a >> X >> Y;

            if(a)
                cout << query(1) << '\n';

            else {
                cin >> mul;
                update(1);
            }
        }
    }

    return 0;
}
