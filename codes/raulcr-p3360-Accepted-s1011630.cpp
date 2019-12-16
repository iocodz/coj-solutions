#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1001;
const LL MAX = 32;

int N, M;
LL a[MAXN], lazy[MAX];
vector<LL> inter[MAX];

void update(LL i, LL j, LL val){
    LL ci = i, li = i / MAX, lj = j / MAX;

    for( ; i / MAX == li && i < j ; i++)
        a[i] += val;

    //int cpli = li;

    for(li = i / MAX ; lj != li ; li++)
        lazy[li] += val;

    for(i = max(lj * MAX, i) ; i <= j ; i++)
        a[i] += val;

    li = ci / MAX;
    inter[li].clear();
    inter[lj].clear();

    for(i = li * MAX ; i / MAX == li ; i++)
        inter[li].push_back(a[i]);

    for(i = lj * MAX ; i / MAX == lj ; i++)
        inter[lj].push_back(a[i]);


    sort(inter[li].begin(), inter[li].end());
    sort(inter[lj].begin(), inter[lj].end());
}

int query(LL i, LL j, LL val){
    LL sol = 0LL;

    LL li = i / MAX, lj = j / MAX;

//    LL val = max(lazy[li] + a[i], lazy[lj] + a[j]);

    for( ; i / MAX == li && i < j ; i++)
        if(a[i] + lazy[li] > val)
            sol++;

    for(li = i / MAX ; lj != li ; li++)
        sol += MAX - (upper_bound(inter[li].begin(), inter[li].end(), val - lazy[li]) - inter[li].begin());

    for(i = max(lj * MAX, i) ; i <= j ; i++)
        if(a[i] + lazy[lj] > val)
            sol++;

    return sol;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;

    for(int i = 0 ; i < N ; i++){
        cin >> a[i];
        inter[i / MAX].push_back(a[i]);
    }

    for(int i = 0 ; i < MAX ; i++)
        sort(inter[i].begin(), inter[i].end());

    while(M--){
        int b, c;
        cin >> b >> c;
        b--; c--;
        cout << query(b, c, max(a[b], a[c])) << "\n";
    }

    return 0;
}
