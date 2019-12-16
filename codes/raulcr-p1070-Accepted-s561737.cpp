#include <iostream>
#include <cmath>

using namespace std;

typedef long long LL;

LL P[101];

void calp(){
    for (int i = 1 ; i <= 100 ; i++)
        P[i] = i * i;
}

int main()
{
    calp();
    int N;
    while (cin >> N){
        LL cuad = 0, rect = 0;
        for (int i = N ; i > 0 ; i--)
            cuad += P[i];

        rect = pow((N * (N + 1)) / 2, 2);

        cout << cuad << " " << rect << '\n';
    }
    return 0;
}
