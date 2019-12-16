#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9;

int T;

struct matrix{
    long long M[2][2];

    friend matrix operator *(matrix &a,matrix &c){
        matrix b;
        b.M[0][0] = (c.M[0][0] * a.M[0][0] + c.M[0][1] * a.M[1][0]) % MOD;
        b.M[0][1] = (c.M[0][0] * a.M[1][0] + c.M[0][1] * a.M[1][1]) % MOD;
        b.M[1][0] = (c.M[1][0] * a.M[0][0] + c.M[1][1] * a.M[1][0]) % MOD;
        b.M[1][1] = (c.M[1][0] * a.M[0][1] + c.M[1][1] * a.M[1][1]) % MOD;
        return b;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){

        long long N;
        cin >> N;

        matrix A = {0,1,1,1};
        matrix B = {0,1,1,1};

        N--;
        while(N){
            if(N & 1)
                B = A * B;
            A = A * A;
            N /= 2;
        }

        int k = 9 - log10(B.M[1][0]);

        while(k--)
            cout << 0;

        cout << B.M[1][0] << '\n';
    }

    return 0;
}
