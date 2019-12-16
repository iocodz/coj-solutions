///by r@ul!

#include <string>
#include <iostream>

using namespace std;

const int CJ = 10;
int VJ[CJ];

void cambiarv(int & a, int & b){
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int cn, a = 1;
    cin >> cn;
    while(cn > 0){
        for(int i = 1 ; i <= CJ ; i++)
            cin >> VJ[i];
        for(int i = 1 ; i <= CJ ; i++)
            for(int j = i + 1 ; j <= CJ ; j++)
                if(VJ[i] < VJ[j])
                    cambiarv(VJ[i], VJ[j]);
        int sum = 0;
        for(int i = 2 ; i < CJ ; i++)
            sum += VJ[i];
        cout << a << " " << sum << '\n';
        a++;
        cn--;
    }
    return 0;
}
