#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> N && N){
        long long k = (N - 2) * 8 + (N - 2) * 4;

        if(k > 0)
            cout << k;
        else
            cout << 0;
        cout << '\n';

    }
    return 0;
}
