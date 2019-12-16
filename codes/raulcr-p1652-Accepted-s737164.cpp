#include <bits/stdc++.h>

using namespace std;

int sol;

void hanoi(int n, int in, int inter, int fi){
    if(n > 0){
        hanoi(n - 1, in, fi, inter);
        cout << "Move ring from stick " << in << " to stick "<< fi << ".\n";
        sol++;
        hanoi(n - 1, inter, in, fi);
    }
}

int main()
{
    int N;
    cin >> N;
    hanoi(N, 1, 2, 3);
    cout << "You needs " << sol << " moves.";
    return 0;
}