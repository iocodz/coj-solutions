///by r@ul!

#include <iostream>

using namespace std;

int main()
{
    long long e, j, sum = 0;
    cin >> e >> j;
    for (int i = 1; i <= e; i++){
        sum += (e - i) * j;
    }
    cout << sum;
    return 0;
}
