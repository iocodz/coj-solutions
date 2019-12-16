#include <iostream>

using namespace std;

int A[10001];

int main()
{
    int n = 2;
    A[0] = 0;
    A[1] = 1;
    int i = 1;
    while (n < 10001){
        A[n] = (A[n - 1] + A[n - 2]) % 10000;
        n++;
    }
    int cant;
    cin >> cant;
    for (cant; cant > 0; cant--){
        int x;
        cin >> x;
        cout << A[x - 2] << " " << A[x- 1] << " " << A[x] << endl;
    }

    return 0;
}
