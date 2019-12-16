#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef pair<int, int> pii;

const int MAXN = 50001;

int N, Q;
int A[MAXN];

struct nod{
    int ini, fin;
    int men, may;
};

nod S[MAXN * 3];

void constr(int nodo, int in, int fi){
    if(in == fi){
        S[nodo].men = A[in];
        S[nodo].may = A[in];
        S[nodo].ini = S[nodo].fin = in;
        return;
    }

    int m2 = (in + fi) / 2;

    constr(2 * nodo, in, m2);
    constr(2 * nodo + 1, m2 + 1, fi);

    S[nodo].men = min(S[nodo * 2].men, S[nodo * 2 + 1].men);
    S[nodo].may = max(S[nodo * 2].may, S[nodo * 2 + 1].may);
    S[nodo].ini = S[nodo * 2].ini;
    S[nodo].fin = S[nodo * 2 + 1].fin;
}

int X, Y;
int questmin(int nodo){
    if(S[nodo].ini >= X && S[nodo].fin <= Y)
        return S[nodo].men;
    if(Y < S[nodo].ini || X > S[nodo].fin)
        return 1 << 30;

    int m1 = questmin(nodo * 2);
    int m2 = questmin(nodo * 2 + 1);

    return min(m1, m2);
}

int questmax(int nodo){
    if(S[nodo].ini >= X && S[nodo].fin <= Y)
        return S[nodo].may;
    if(Y < S[nodo].ini || X > S[nodo].fin)
        return 0;

    int m1 = questmax(nodo * 2);
    int m2 = questmax(nodo * 2 + 1);

    return max(m1, m2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> Q;

    for(int i = 1 ; i <= N ; i++)
        cin >> A[i];

    constr(1, 1, N);

    for(int i = 1 ; i <= Q ; i++){
        cin >> X >> Y;
        if(X > Y)
            swap(X, Y);
        cout << questmax(1) - questmin(1) << '\n';
    }
    return 0;
}
