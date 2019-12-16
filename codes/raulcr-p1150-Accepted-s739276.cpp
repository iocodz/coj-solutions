#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long i64;

i64 N;

int main()
{
    while(cin >> N){
        if(N % 10 == 0)
            cout << 2 << '\n';
        else
            cout << "1\n" << N % 10 << '\n';
    }
    return 0;
}
