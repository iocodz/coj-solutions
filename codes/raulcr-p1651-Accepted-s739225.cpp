#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 5;

int N, Q;
int A[MAXN];

struct nod{
    int inic, fin;
    int men;
};

nod S[3 * MAXN];

void build(int nodo, int in, int fi){
    if(in == fi){
        S[nodo].fin = S[nodo].inic = in;
        S[nodo].men = A[in];
        return;
    }

    int m2 = (in + fi) / 2;

    build(nodo * 2, in, m2);
    build(nodo * 2 + 1, m2 + 1, fi);

    S[nodo].inic = S[nodo * 2].inic;
    S[nodo].fin = S[nodo * 2 + 1].fin;
    S[nodo].men = min(S[nodo * 2].men, S[nodo * 2 + 1].men);
}

int X, Y;

int query(int nodo){
    if(S[nodo].inic >= X && S[nodo].fin <= Y)
        return S[nodo].men;
    if(Y < S[nodo].inic || X > S[nodo].fin)
        return (1 << 30);

    int a = query(2 * nodo);
    int b = query(2 * nodo + 1);

    return min(a, b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> A[i];

    build(1, 1, N);

    cin >> Q;

    for(int i = 1 ; i <= Q ; i++){
        cin >> X >> Y;
        if(X > Y)
            swap(X, Y);
        cout << query(1) << '\n';
    }
    return 0;
}
