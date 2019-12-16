///by taskkill
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1e5 + 1;

int N;
pii coor[MAXN];
int f[MAXN], c[MAXN];
long long sol;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> coor[i].first >> coor[i].second;
        f[coor[i].first]++;
        c[coor[i].second]++;
    }

    for(int i = 1 ; i <= N ; i++){
        int x = coor[i].first;
        int y = coor[i].second;

        long long k = f[x] - 1;
        long long l = c[y] - 1;

        sol += (k * l);
    }

    cout << sol;
    return 0;
}
