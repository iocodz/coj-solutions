#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;
const int MAX = 318;

int N, M, a[MAXN];
vector<int> inter[MAX];

void update(int pos, int val){
    for(int i = 0 ; i < inter[pos / MAX].size() ; i++)
        if(inter[pos / MAX][i] == a[pos]){
            inter[pos / MAX][i] = a[pos] = val;
            break;
        }
    sort(inter[pos / MAX].begin(), inter[pos / MAX].end());
}

int query(int i, int j, int val){
    int sol = 0;

    int li = i / MAX, lj = j / MAX;

    for( ; i / MAX == li && i < j ; i++)
        if(a[i] <= val)
            sol++;

    for(li = i / MAX ; lj != li ; li++)
        sol += upper_bound(inter[li].begin(), inter[li].end(), val) - inter[li].begin();

    for(i = max(lj * MAX, i) ; i <= j ; i++)
        if(a[i] <= val)
            sol++;

    return sol;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++){
        cin >> a[i];
        inter[i / MAX].push_back(a[i]);
    }

    for(int i = 0 ; i < MAX ; i++)
        sort(inter[i].begin(), inter[i].end());

    while(M--){
        char op; int b, c, d;
        cin >> op;

        if(op == 'C'){
            cin >> b >> c;
            update(b, c);
        }
        else {
            cin >> b >> c >> d;
            cout << query(b, c, d) << "\n";
        }

    }

    return 0;
}
