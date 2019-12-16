#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    while (cin >> a && a != 0){
        double K[a + 1];

        double med = 0;

        for (int i = 1 ; i <= a ; i++)
            cin >> K[i];

        sort(K + 1, K + 1 + a);

        if (a % 2 == 0)
            med = (K[a / 2] + K[(a / 2) + 1]) / 2;

        else
            med = (K[a / 2 + 1]);

        printf("%.1lf\n", med);
    }

    return 0;
}
