#include <bits/stdc++.h>
using namespace std;
typedef long double ld;

ld R, S, T, F;
int N;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout << setprecision(5) << fixed;
	//freopen("1.in", "r", stdin);
	cin >> R >> S >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> F;
		T -= (F - R) / S;
	}
	T += 2 * N;
	cout << T << '\n';

	return 0;
}