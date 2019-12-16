#include <iostream>
#include <string>
#include <cmath>

using namespace std;

typedef long long LL;

int const MOD = (int)1e9;

LL lastd(LL k, LL j){
    if (j == 0)
        return 1;

    if (j % 2 == 0)
        return lastd(k, j / 2) * lastd(k, j / 2) % MOD;

    return (lastd(k, j - 1) * k) % MOD;
}

int main ()
{
    int N;
    cin >> N;

    while (N--){
        LL a, b;
        cin >> a >> b;

        cout << lastd(a, b) << '\n';
    }

    return 0;
}
