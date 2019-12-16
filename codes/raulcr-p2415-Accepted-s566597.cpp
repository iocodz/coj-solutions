#include <iostream>
#include <cstdio>
#include <algorithm>

#define AR (3.1415926535897932384626433832795 * (R * R))

using namespace std;

int main()
{
    int K;
    cin >> K;

    while (K > 0){
        int SQ;
        cin >> SQ;

        double sum = 0;

        while (SQ > 0){
            double R = 0, H = 0;
            cin >> R >> H;
            sum += AR * H;
            SQ--;
        }
        printf("%.2lf\n", sum);
        K--;
    }
    return 0;
}
