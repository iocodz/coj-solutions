///by r@ul!

#include <iostream>

using namespace std;

int TA[500];

void prec(){
    for(int i = 1 ; i <= 500 ; i++)
        TA[i] = TA [i - 1] + (i * i);
}

int main()
{
    prec();
    int a;
    while(cin >> a && a != 0){
        cout << TA[a] << '\n';
    }
    return 0;
}
