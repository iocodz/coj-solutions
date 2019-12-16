///by r@ul!

#include <iostream>

using namespace std;

int A[1000];
int B[1000];

int main()
{
    int a, b;
    for(int i = 0 ; i < 3 ; i++){
        cin >> a >> b;
        A[a]++;
        B[b]++;
    }

    for(int i = 1 ; i <= 1000 ; i++)
        if(A[i] == 1)
            cout << i << " ";

    for(int i = 1 ; i <= 1000 ; i++)
        if(B[i] == 1)
            cout << i;

    return 0;
}
