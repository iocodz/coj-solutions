#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    cin >> N;
    while(N--){
        double a, sol = 0.0;
        for(int i = 1 ; i <= 10 ; i++){
            cin >> a;
            sol += a;
        }

        sol = (85 * sol) / 100;

        printf("%.3lf\n", sol);
    }

    return 0;
}
