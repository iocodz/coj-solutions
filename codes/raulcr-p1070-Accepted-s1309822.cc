#include <iostream>

using namespace std;
int cuadrados[101];
int main()
{
    for (int i = 0; i < 101; i++)
        cuadrados[i] = i * i;
    for(int i = 1; i < 101; i++)
        cuadrados [i] += cuadrados[i - 1];
    int n;
    while(cin >> n)
        cout << cuadrados[n] << " " << (n*(n + 1)/2) * (n*(n + 1)/2) << "\n";
    return 0;
}
