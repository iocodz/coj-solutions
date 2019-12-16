#include <bits/stdc++.h>

using namespace std;

long long N, fib[100];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fib[1] = fib[2] = 1;
    for(int i = 3 ; i <= 60 ; i++){
        fib[i] = (fib[i - 2] + fib[i - 1]) % 10;
    }

    while(cin >> N){
        cout << fib[N % 60] << '\n';
    }
    return 0;
}
