#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#define MAXN 1000001

using namespace std;

typedef long long LL;

LL A[MAXN];

LL virar(LL & a){
    LL sol = 0, p = 1;
    LL b = a, cont = 0;

    while (b > 0){
        b /= 10;
        cont++;
    }

    p = pow(10, cont) / 10;

    while (a > 0){
        sol += ((a % 10) * p);
        p /= 10;
        a /= 10;
    }
    return sol;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 1 ; i <= N ; i++)
        cin >> A[i];

    for (int i = 1 ; i <= N ; i++)
        A[i] = virar(A[i]);

    sort(A + 1, A + 1 + N);

    for (int i = 1 ; i <= N ; i++)
        cout << A[i] << endl;

    return 0;
}
