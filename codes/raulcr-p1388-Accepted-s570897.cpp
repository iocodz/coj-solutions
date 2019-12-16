#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int lastd(int k, int j){
    if (j == 0)
        return 1;

    if (j % 2 == 0)
        return lastd(k, j / 2) * lastd(k, j / 2) % 10;

    return (lastd(k, j - 1) * k) % 10;
}

int main ()
{
    int N;
    cin >> N;

    while (N--){
        int a, b;
        cin >> a >> b;

        cout << lastd(a, b) << '\n';
    }

    return 0;
}
