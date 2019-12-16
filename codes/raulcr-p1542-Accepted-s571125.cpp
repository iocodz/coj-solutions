#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const long long MOD = 1000000007;

long long lastd(int k, long long j){
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
        long long a;
        cin >> a;
        cout << lastd(2, a - 1) << endl;
    }
    return 0;
}
