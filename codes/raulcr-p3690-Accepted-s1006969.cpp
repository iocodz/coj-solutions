#include <bits/stdc++.h>

using namespace std;

#define cik(i,a , b, c) for(int i =(a); i <=(b); i +=(c))
#define ll double

const ll PI = 3.1415927;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll r, n;
    while(cin >> r >> n){
        if(r == 0 && n == 0){
            break;
        }

        double cuadr = sin(4 * PI / n);

        double s2pi = sin(2 * PI / n);
        s2pi *= s2pi;

        printf("%lf\n", (cuadr / (1.00 + sqrt(1.00 - s2pi))) * (n * r * r) / 2);
    }


    return 0;
}
