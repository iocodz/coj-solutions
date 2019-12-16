#include <bits/stdc++.h>

using namespace std;

string N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    int dv3 = 0;
    for(int i = 0 ; i < N.size() ; i++)
        dv3 += (N[i] - '0');

    if(dv3 % 3 != 0){
        cout << -1;
        return 0;
    }

    sort(N.begin(), N.end());

    for(int i = N.size() - 1 ; i >= 0 ; i--)
        cout << N[i];


    return 0;
}
