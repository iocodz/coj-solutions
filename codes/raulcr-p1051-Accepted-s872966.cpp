#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    int md = N % 3;

    if(!md)
        cout << N / 3 * 2;
    if(!(md - 1))
        cout << (N - 1) / 3 * 2;
    else
        cout << (N - 1) / 3 * 2 + 1;

    return 0;
}
