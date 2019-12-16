#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 1e6 + 5;
int lbs(int x) { return x & -x; }

int ft[MAXN];

void update(int i)
{
	for(; i < MAXN;  i += lbs(i)) ft[i]++;
}

int query(int i)
{
	int ret = 0;
	for(; i ; i -= lbs(i)) ret += ft[i];
	return ret;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("1.in", "r", stdin);
	int N, Q, l, r, op;
	cin >> Q;
	while(Q--)
	{
		cin >> op;
		switch(op)
		{
		case 1:
			cin >> l;
			update(l);
			break;
		case 2:
			cin >> l >> r;
			cout << query(r) - query(l - 1) << '\n';
		}
	}
	return 0;
}