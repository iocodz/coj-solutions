#include <iostream>
#include <string>

using namespace std;

int sumdp(string a){
    int sum = 0;
    for (int  i = 0; i < a.length(); i++){
        sum += a[i] - 48;
        i++;
    }
    return sum;
}

int sumdi(string a){
    int sum1 = 0;
    for (int  i = 1; i < a.length(); i++){
        sum1 += a[i] - 48;
        i++;
    }
    return sum1;
}

int main()
{
    string a;
    while (cin >> a){
        if (a[0] - 48 == 0)
            return 0;
        if ((sumdp(a) - sumdi(a)) % 11 == 0)
            cout << a << " is a multiple of 11." << endl;
        else
            cout << a << " is not a multiple of 11." << endl;
    }
    return 0;
}
