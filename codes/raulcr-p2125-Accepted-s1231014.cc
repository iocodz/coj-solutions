#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;
int arr[MAXN], st[4 * MAXN], N, Q, x, y;

int val(int n)
{
    if(!n) return 0;
    if(n > 0) return 1;
    else return -1;
}

void build(int n = 1, int l = 1, int r = N)
{
    if(l == r)
    {
        st[n] = val(arr[l]);
        return;
    }
    int m = (l + r) / 2, nl = 2 * n, nr = nl + 1;
    build(nl, l, m);
    build(nr, m + 1, r);
    st[n] = st[nl] * st[nr];
}

void update(int i, int v, int n = 1, int l = 1, int r = N)
{
    if(l > i || r < i) return;
    if(l == r)
    {
        st[n] = val(v);
        return;
    }
    int m = (l + r) / 2, nl = 2 * n, nr = nl + 1;
    update(i, v, nl, l, m);
    update(i, v, nr, m + 1, r);
    st[n] = st[nl] * st[nr];
}

int query(int ql, int qr, int n = 1, int l = 1, int r = N)
{
    if(l > qr || r < ql) return 1;
    if(ql <= l && r <= qr) return st[n];
    int m = (l + r) / 2;
    int ret = query(ql, qr, 2 * n, l, m);
    ret *= query(ql, qr, 2 * n + 1, m + 1, r);
    return ret;
}

void sign(int n)
{
    if(!n) cout << 0;
    else if(n > 0) cout << '+';
    else cout << '-';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char op;
    while(cin >> N >> Q)
    {
        for(int i = 1; i <= N; i++)
            cin >> arr[i];
        build();
        while(Q--)
        {
            cin >> op >> x >> y;
            if(op == 'C') update(x, y);
            else sign(query(x, y));
        }
        cout << '\n';
    }
    return 0;
}