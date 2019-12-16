#include <bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
using namespace std;
typedef long long ll;
typedef vector<vector<ll> > matrix;
const ll MOD = 1000000007;
const int K = 5;

int a, b, c, d, e, f;
matrix mul(matrix A, matrix B)
{
    matrix C(K+1, vector<ll>(K+1));
    REP(i, K) REP(j, K) REP(k, K)
        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}
matrix pow(matrix A, int p)
{
    if (p == 1)
        return A;
    if (p % 2)
        return mul(A, pow(A, p-1));
    matrix X = pow(A, p/2);
    return mul(X, X);
}

int fib(int N)
{
    if(N == 0) return 0;
    vector<ll> F1(K+1);
    F1[1] = 1;
    F1[2] = 1;
    F1[3] = 0;
    F1[4] = c;
    F1[5] = f;
    matrix T(K+1, vector<ll>(K+1));
    T[1][1] = a, T[1][2] = 0, T[1][3] = b, T[1][4] = 1, T[1][5] = 0;
    T[2][1] = 0, T[2][2] = d, T[2][3] = e, T[2][4] = 0, T[2][5] = 1;
    T[3][1] = 0, T[3][2] = 1, T[3][3] = 0, T[3][4] = 0, T[3][5] = 0;
    T[4][1] = 0, T[4][2] = 0, T[4][3] = 0, T[4][4] = 1, T[1][5] = 0;
    T[5][1] = 0, T[5][2] = 0, T[5][3] = 0, T[5][4] = 0, T[5][5] = 1;

    if (N == 1)
        return 1;
    T = pow(T, N - 1);

    ll res = 0;
    REP(i, K)
	    res = (res + T[1][i] * F1[i]) % MOD;
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t, n;
	cin >> a >> b >> c;
	cin >> d >> e >> f;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cout << fib(n) << '\n';
	}
	return 0;
}