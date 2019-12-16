#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50;

int N;
int ta[MAXN], tb[MAXN];

int main()
{
    cin >> N;

    ta[0] = 1;
    tb[0] = 0;

    for(int i = 1 ; i <= N ; i++){
        tb[i] = ta[i - 1] + tb[i - 1];
        ta[i] = tb[i - 1];
    }

    cout << ta[N] << ' ' << tb[N] << '\n';
    return 0;
}
