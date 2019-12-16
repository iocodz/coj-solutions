#include <bits/stdc++.h>

using namespace std;

int N, M;

int find_sol(int k, int j){
    if(k % 2 && j % 2){
        int k1 = k / 2 + 1;
        int j1 = j / 2 + 1;
        int sol = (1 + 4 * find_sol(k - k1, j - j1));
        return sol;
    }
    return 0;
}

int main()
{
    cin >> N >> M;

    cout << find_sol(N, M);
    return 0;
}
