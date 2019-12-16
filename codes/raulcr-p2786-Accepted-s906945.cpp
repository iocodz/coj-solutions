#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    int sol = 0;
    for(int i = 1 ; i <= N ; i++){
        if(i % 2 == 1) sol += i;
        else sol += (i - 1);
    }

    cout << sol;

    return 0;
}
