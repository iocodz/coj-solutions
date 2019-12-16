#include <bits/stdc++.h>

using namespace std;

int N, sol;

int main()
{
    cin >> N;
    
    for(int i = 1 ; i < N ; i++)
        sol += i * (N - i) * (N - i);
    cout << sol;
    
    return 0;
}
