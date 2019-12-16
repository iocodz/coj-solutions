#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MXSQ = 320;

int buyers[MAXN], SQ[MXSQ];
int N, Q, sz_blk;

void build(){
	sz_blk = sqrt(N);
	for (int i = 0; i < N; ++i)
	{
		SQ[i / sz_blk] = max(SQ[i / sz_blk], buyers[i]);
	}
}

int first(int i, int price){
	while(buyers[i] < price) i++;
	return i;
}

int query(int l, int r, int price)
{
	while(l < r && l % sz_blk != 0 && l != 0)
	{
		if(buyers[l] >= price) return l;
		l++;
	}

	while(l + sz_blk <= r)
	{
		if(SQ[l / sz_blk] >= price) return first(l, price);
		l += sz_blk;
	}

	while(l <= r){
		if(buyers[l] >= price) return l;
		l++;
	}
	return -1;
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("1.in", "r", stdin);
	int l, r, price;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> buyers[i];
	}
	build();
	cin >> Q;
	while(Q--)
	{
		cin >> price >> l >> r;
		int ans = query(l - 1, r - 1, price);
		cout << (ans == -1 ? ans : ans + 1) << '\n';	
	}
	return 0;
}