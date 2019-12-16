#include <iostream>
#include <algorithm>

using namespace std;

long long K[10];

int main()
{
    int N;
    cin >> N;

    while (N--){
        long long A, B, C;
        cin >> A >> B >> C;

        K[1] = A * B + C;
        K[2] = A * C + B;
        K[3] = B * C + A;
        K[4] = (C + B) * A;
        K[5] = (C + A) * B;
        K[6] = (B + A) * C;

        sort(K + 1, K + 7);

        cout << K[1] << " " << K[6] << endl;
    }
    return 0;
}
