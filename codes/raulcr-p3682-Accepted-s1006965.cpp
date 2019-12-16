#include <bits/stdc++.h>

using namespace std;

#define cik(i,a , b, c) for(int i =(a); i <=(b); i +=(c))

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int T; cin >> T;

    cik(i, 1, T, 1){
        double a, b, c; cin >> a >> b >> c;

        double t = ((b + c - a) * (a + b - c) * (c + a - b)) / (a * b * c);

        if(t == 1.00){
            cout << "equilateral\n";
        }
        else if(t > 0.5 && t < 1){
            cout << "good\n";
        }
        else if(t <= 0.5 && t > 0 ){
            cout << "bad\n";        }
    }

    return 0;
}
