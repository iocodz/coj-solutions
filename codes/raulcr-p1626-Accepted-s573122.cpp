#include <iostream>
#include <string>

using namespace std;

int rever(int a){
    int x = a;
    int sol = 0;

    int cont = 0;

    while (x > 0){
        x /= 10;
        cont++;
    }

    int pow = 1;

    while (cont--)
        pow *= 10;

    pow /= 10;

    while (a > 0){
        sol += (a % 10) * pow;
        a /= 10;
        pow /= 10;
    }

    return sol;
}

int main()
{
    int N;
    cin >> N;

    while (N > 0){
        int a, b;
        cin >> a >> b;

        cout << rever(rever(a) + rever(b)) << '\n';

        N--;
    }

    return 0;
}
