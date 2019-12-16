#include <bits/stdc++.h>

using namespace std;

int N;
string a;

int main()
{
    cin >> N >> a;

    sort(a.begin(), a.end());

    cout << a[N / 2];


    return 0;
}
