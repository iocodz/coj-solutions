#include <bits/stdc++.h>

using namespace std;

int N, M, A;
typedef unsigned long long i64;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    cin >> N >> M >> A;

    i64 p = N / A, p1 = M / A;
    
    if(N % A)
        p++;
    
    if(M % A)
        p1++;
    
    cout << p1 * p;
    return 0;
}
