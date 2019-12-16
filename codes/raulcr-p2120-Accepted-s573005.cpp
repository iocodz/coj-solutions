#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int TA[5001];

int repeat (int x){
    int X[5];
    int i = 1;
    while (x > 0){
        X[i] = x % 10;
        x /= 10;
        i++;
    }

    sort(X, X + i);

    for (int j = 2 ; j <= i ; j++)
        if(X[j - 1] == X[j])
            return false;

    return true;
}

void prec(){
    for (int i = 0 ; i <= 5000 ; i++){
        if (repeat(i))
            TA[i] = TA[i - 1] + 1;
        else
            TA[i] = TA[i - 1];
    }
}

int main()
{
    prec();

    int a, b;

    while (cin >> a >> b){
        cout << TA[b] - TA[a - 1] << endl;
    }
    return 0;
}
