#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

int N;
int A[MAXN];
int SOL[MAXN];

struct BIT{
    int TA[MAXN];

    BIT(){
        memset(TA, 0, sizeof TA);
    }

    BIT(int *A, int N){
        memset(TA, 0, sizeof TA);
        for (int i = 1 ; i <= N ; i++)
            update(i, A[i]);
    }

    void update(int pos, int v){//X[pos] += v
        while (pos < MAXN){
            TA[pos] += v;
            pos += pos & -pos;
        }
    }

    int query(int pos) {
        int r = 0;
        while(pos > 0){
            r += TA[pos];
            pos -= pos & -pos;
        }
        return r;
    }
};

BIT ABI;

int main()
{
    cin >> N;
    for (int i = 1 ; i <= N ; i++)
        cin >> A[i];

    for (int i = N ; i >= 1 ; i--){
        SOL[i] = ABI.query(MAXN - 1) - ABI.query(A[i]);
        ABI.update(A[i], 1);
    }

    cout << SOL[1];
    for (int i = 2 ; i <= N ; i++)
        cout << " " << SOL[i];
    return 0;
}
