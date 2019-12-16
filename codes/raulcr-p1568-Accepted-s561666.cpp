#include <iostream>

using namespace std;

typedef long long LL;

int main()
{
    LL N, R, C;
    int K;

    cin >> N >> K >> R >> C;

    K %= 4;

    if (K < 0)
        K += 4;

    if (K == 0)
        cout << (R - 1) * N + C;

    else if (K == 1)
        cout << (N - C) * N + R;

    else if (K == 2)
        cout << (N - R) * N + N - C + 1;

    else if (K == 3)
        cout << (C - 1) * N + N - R + 1;

    return 0;
}
