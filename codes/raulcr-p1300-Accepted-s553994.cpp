///by r@ul!

#include <iostream>

using namespace std;

int FRQ[1001];

int main()
{
    int a, sol = 0;
    for(int i = 1 ; i <= 10 ; i++){
        cin >> a;
        FRQ[a % 42]++;
    }
    for(int i = 0 ; i <= 1001 ; i++)
        if(FRQ[i] > 0)
            sol++;
    cout << sol;
    return 0;
}
