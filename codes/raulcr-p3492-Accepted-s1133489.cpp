#include <bits/stdc++.h>

using namespace std;

int N, t, sol;

int main()
{
    cin >> t;
    for(int j = 1 ; j <= t ; j++){
        cin >> N;
        sol = 1;
        for(int i = 2 ; i <= N ; i++)
            sol *= i;
        cout << "Case #" << j << ": " << sol << '\n';
    }

    return 0;
}
