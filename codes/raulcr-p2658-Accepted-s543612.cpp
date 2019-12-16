///by r@ul!

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a > 0){
        int ai, a1, a3, an2, s, d, n;
        cin >> a3 >> an2 >> s;
        n = 2 * s / (a3 + an2);
        d = (an2 - a3) / (n - 5);
        a1 = a3 - (2 * d);
        cout << n << endl;
        for (int i = 1; i <= n; i++){
            ai = a1 + (i - 1) * d;
            if (i == n)
                cout << ai << endl;
            else
                cout << ai << " ";
        }
        a--;
    }
    return 0;
}
