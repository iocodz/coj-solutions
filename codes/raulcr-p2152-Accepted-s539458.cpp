#include <iostream>
#include <string>

using namespace std;

long long sumdig(string a, int i){
     long long sum = 0;
     for (; i < a.length(); i++){
         sum += (a[i] - 48);
     }
     return sum;
}

int main()
{
    string a;
    int cant;
    cin >> cant;
    while (cant > 0){
        cin >> a;
        int i = 0;
        if (a[0] == '-'){
            i = 1;
            cout << sumdig(a, i) << endl;
        }
        else {
            cout << sumdig(a, i) << endl;
        }
        cant--;
    }
    return 0;
}
