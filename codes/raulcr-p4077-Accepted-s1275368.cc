#include <bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
using namespace std;
typedef long long ll;
typedef vector<vector<ll> > matrix;
const ll MOD = 1000000007;
const int K = 5;
// computes A * B
int a, b, c, d, e, f;
matrix mul(matrix A, matrix B)
{
    matrix C(K+1, vector<ll>(K+1));
    REP(i, K) REP(j, K) REP(k, K)
        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}
// computes A ^ p
matrix pow(matrix A, int p)
{
    if (p == 1)
        return A;
    if (p % 2)
        return mul(A, pow(A, p-1));
    matrix X = pow(A, p/2);
    return mul(X, X);
}
// returns the N-th term of Fibonacci sequence
int fib(int N)
{
    // create vector F1
    if(N == 0) return 0;
    vector<ll> F1(K+1);
    F1[1] = 1;
    F1[2] = 1;
    F1[3] = 0;
    F1[4] = c;
    F1[5] = f;
    // create matrix T
    matrix T(K+1, vector<ll>(K+1));
    T[1][1] = a, T[1][2] = 0, T[1][3] = b, T[1][4] = 1, T[1][5] = 0;
    T[2][1] = 0, T[2][2] = d, T[2][3] = e, T[2][4] = 0, T[2][5] = 1;
    T[3][1] = 0, T[3][2] = 1, T[3][3] = 0, T[3][4] = 0, T[3][5] = 0;
    T[4][1] = 0, T[4][2] = 0, T[4][3] = 0, T[4][4] = 1, T[1][5] = 0;
    T[5][1] = 0, T[5][2] = 0, T[5][3] = 0, T[5][4] = 0, T[5][5] = 1;
    // raise T to the (N-1)th power
    if (N == 1)
        return 1;
    T = pow(T, N - 1);
    // the answer is the first row of T . F1
    ll res = 0;
    REP(i, K)
	    res = (res + T[1][i] * F1[i]) % MOD;
	return res;
}

ll fibo(ll n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	return a * fibo(n - 1) + b * fibo(n - 2);
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t, n;
	//freopen("1.in", "r", stdin);
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