    #include <bits/stdc++.h>

    using namespace std;

    int T, N;

    int main()
    {
    ios_base::sync_with_stdio(0);
    cin.tie(0);            double x, y;
        while(cin >> x >> y){

            if(x > 0 && y > 0)
                cout << "Q1\n";

            else if(x < 0 && y < 0)
                cout << "Q3\n";

            else if(x > 0 && y < 0)
                cout << "Q4\n";

            else if(x < 0 && y > 0)
                cout << "Q2\n";
                else
                cout << "AXIS\n";
        }
        return 0;
    }
