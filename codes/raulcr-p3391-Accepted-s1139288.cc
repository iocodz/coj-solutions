#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;

typedef tree < int, null_type, less <int>, rb_tree_tag, tree_order_statistics_node_update > set_t;

#define X real()
#define Y imag()

const int MAXK = 1e6 + 25;
const int MAX = 2e5 + 5;
//const int MAX = 25 + 5;

int n, q, lista[MAX], val[MAX], ST[4 * MAX], p[4 * MAX], ult[MAXK];
int pre[MAX], sig[MAX];

//set_t id[MAXK];
set <int> id[MAXK];

void build(int node, int left, int right) {
    if(left == right) {
        ST[node] = val[left];
        p[left] = node;
        return;
    }
    int mid = (left + right) / 2;
    build(2 * node, left, mid);
    build(2 * node + 1, mid + 1, right);
    ST[node] = max(ST[2 * node], ST[2 * node + 1]);
}

int query(int node, int left, int right, int lo, int hi) {
    if(hi < left || lo > right)
        return 0;
    if(lo <= left && right <= hi)
        return ST[node];
    int mid = (left + right) / 2;
    return max(query(2 * node, left, mid, lo, hi), query(2 * node + 1, mid + 1, right, lo, hi));
}

void update(int pos, int val) {
    pos = p[pos];
    ST[pos] = val;
    pos /= 2;
    while(pos) {
        ST[pos] = max(ST[2 * pos], ST[2 * pos + 1]);
        pos /= 2;
    }
}

void relabel(int pos, int val) {
    if(pre[pos] != 0 && sig[pos] != n + 1) {
        sig[pre[pos]] = sig[pos];
        pre[sig[pos]] = pre[pos];
        update(sig[pos], pre[pos]);
    } else if(sig[pos] != n + 1) {
        pre[sig[pos]] = 0;
        update(sig[pos], 0);
    } else if(pre[pos]) {
        sig[pre[pos]] = n + 1;
    }

    id[lista[pos]].erase(id[lista[pos]].find(pos));
    lista[pos] = val;

    if(id[val].size() == 0) {
        pre[pos] = 0;
        sig[pos] = n + 1;
    } else {
        auto ite = id[val].upper_bound(pos);
        if(ite == id[val].end()) {
            --ite;
            pre[pos] = *ite;
            sig[pos] = n + 1;
        }
        else if(ite == id[val].begin()) {
            sig[pos] = *ite;
            pre[pos] = 0;
        }
        else {
            auto ite2 = ite;
            ite2--;
            pre[pos] = *ite2;
            sig[pos] = *ite;
        }
    }
    id[val].insert(pos);

    if(pre[pos] != 0 && sig[pos] != n + 1) {
        sig[pre[pos]] = pos;
        pre[sig[pos]] = pos;
        update(sig[pos], pos);
    } else if(sig[pos] != n + 1) {
        pre[sig[pos]] = pos;
        update(sig[pos], pos);
    } else if(pre[pos]) {
        sig[pre[pos]] = pos;
    }

    update(pos, pre[pos]);
}

bool se_repite(int a, int b) {
    int aux = query(1, 1, n, a, b);
    return aux >= a;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> q;
    for(int i = 1; i <= n; i++) {
        cin >> lista[i];
        val[i] = ult[lista[i]];
        ult[lista[i]] = i;
        pre[i] = val[i];
        sig[val[i]] = i;
        id[lista[i]].insert(i);
    }

    for(int i = 1; i <= n; i++)
        if(!sig[i])
            sig[i] = n + 1;

    build(1, 1, n);

    while(q--) {
        string s;
        int x, ini, fin, med;
        cin >> s >> x;
        if(s[0] == 'E') {
            int pos = query(1, 1, n, 1, x);
            cout << x - pos << "\n";
        } else {
            int v;
            cin >> v;
            relabel(x, v);
        }
    }
}
