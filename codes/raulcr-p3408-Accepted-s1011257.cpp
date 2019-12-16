#include <bits/stdc++.h>

using namespace std;

int N;
double x[3], y[3], a = -1;
char sol[11];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N;
    while(N--){
        char name[11]; cin >> name;
        for(int i = 0 ; i < 3 ; i++)
            cin >> x[i] >> y[i];

        double sa = abs((x[0] * (y[1] - y[2]) + x[1] * (y[2] - y[0]) + x[2] * (y[0] - y[1])) / 2.0);

        if(sa > a){
            strcpy(sol, name);
            a = sa;
        }
    }

    //cout << sol << ' ' << (double)(round(a * 100) / 100) << '\n';
    printf("%s %.2lf km^2\n", sol, a);

    return 0;
}
