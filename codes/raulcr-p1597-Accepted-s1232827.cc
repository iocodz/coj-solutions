#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    while(cin >> a >> b >> c)
    {
        if( !a && !b && !c) break;
        vector<double> kk;
        for(int i = 1 ; i <= c ; i++)
        {
            double k;
            cin >> k;
            kk.push_back(k);
        }

        sort(kk.begin(), kk.end());

        double sum = 0.0;
        double cant = 0.0;
        for(int i = b ; i < c - a ; i++)
        {
            sum += kk[i];
            cant += 1.0;
        }
        cout.precision(6);

        cout << fixed << sum / cant << '\n';
        //printf("%lf\n", sum);
    }
    return 0;
}

