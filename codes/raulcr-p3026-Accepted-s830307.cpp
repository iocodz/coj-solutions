#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int N;
int mx, mex, my, mey;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    mx = my = -MAXN;
    mex = mey = MAXN;

    int x, y;
    for(int i = 1 ; i <= N ; i++){
        cin >> x >> y;
        if(mx < x)
            mx = x;
        if(mex > x)
            mex = x;
        if(my < y)
            my = y;
        if(mey > y)
            mey = y;
    }

    int mda = my - mey;
    int mdb = mx - mex;

    cout << ((mda > mdb) ? (mda * mda) : (mdb * mdb));

    return 0;
}
