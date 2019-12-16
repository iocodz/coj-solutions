#include <iostream>

using namespace std;

int main()
{
    double a, b, sum;
    a = 12;
    sum = 0;
    while (a > 0){
        cin >> b;
        a--;
        sum = sum + b;
    }
    cout << "$" << sum/12;
    return 0;
}