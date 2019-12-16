#include <bits/stdc++.h>

using namespace std;

double a, b;
int t;

int main()
{
    cin >> t;
    while(t--){
        cin >> a >> b;

        double c = a / b;

        printf("%.2lf\n", c);
    }
    return 0;
}
