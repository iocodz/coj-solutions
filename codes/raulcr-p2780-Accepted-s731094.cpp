#include <bits/stdc++.h>

using namespace std;

int N, sol;
string K;

int main()
{
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= 500 ; i++)
        for(int j = 1 ; j <= 500 ; j++)
            if((i * i) - (j * j) == N)
                sol++;

    cout << sol;

    return 0;
}
