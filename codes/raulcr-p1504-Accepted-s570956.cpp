#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long LL;
const int MAXN = (int)1e6 + 1;

int NP[MAXN];

LL pdig(int k){
    LL prod = 1;

    while (k > 0){
        prod *= k % 10;
        k /= 10;
    }

    return prod;
}

void calc(){
    NP[0] = 0;
    for (int i = 1 ; i <= MAXN ; i++){
        if (pdig(i) % 2 == 0)
            NP[i] = NP[i - 1] + 1;
        else
            NP[i] = NP[i - 1];
    }
}

int main ()
{
    calc();

    int N;
    cin >> N;

    while (N > 0){
        int a, b;
        cin >> a >> b;

        cout << NP[b] - NP[a - 1] << '\n';

        N--;
    }
    return 0;
}
