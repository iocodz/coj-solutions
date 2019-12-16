#include <iostream>
#include <algorithm>

using namespace std;

typedef long long LL;

int v;
LL P;
LL A[1001];
LL B[1001];
LL X[1001];

int main()
{
    LL k = 0;
    int a = 1;
    int sol = 0;

    cin >> v >> P;

    for (int i = 1 ; i <= v ; i++){
        cin >> A[i] >> B[i];
        X[i] = A[i] + B[i];
    }

    sort(X, X + v);

    for (int i = 1 ; i <= v ; i++){
        if ((k + X[i]) <= P){
            sol++;
            k += X[i];
        }
        else if ((k + (A[i] / 2) + B[i]) <= P && a > 0){
            sol++;
            a--;
            k += A[i] / 2 + B[i];
        }
        else
            break;
    }

    cout << sol;
    return 0;
}
