#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    //freopen("a.in", "r", stdin);

    cin >> N;

    int sol = (int)log2(N) + 1;

    cout << sol;

    return 0;
}
