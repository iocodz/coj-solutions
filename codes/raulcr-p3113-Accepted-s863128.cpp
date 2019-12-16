#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef pair<int, int> coor;

const int MAXN = 1e5 + 1;

int N, Mxd, Lxd;
coor M[MAXN];

int calc(int i, int j){
    return abs(M[i].x - M[j].x) + abs(M[i].y - M[j].y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> M[i].x >> M[i].y;
        if(i > 1)
            Mxd += calc(i, i - 1);
    }

    for(int i = 1 ; i < N ; i++)
        Lxd = max(Lxd, (calc(i + 1, i) + calc(i, i - 1)) - calc(i - 1, i + 1));

    cout << Mxd - Lxd;

    return 0;
}
