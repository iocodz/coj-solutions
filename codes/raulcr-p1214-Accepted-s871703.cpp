#include <bits/stdc++.h>

using namespace std;

int N;
double s, a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> a >> s;
        double l = sqrt((s * s - 4 * a)) / 2;
        printf("%.2f\n", l);
    }

    return 0;
}
