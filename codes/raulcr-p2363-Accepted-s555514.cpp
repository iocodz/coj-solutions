#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char A[6];

void printA(int a){
    for(int i = 0 ; i < a ; i++)
        cout << A[i];
    cout << endl;
}

int main()
{
    string a;
    cin >> a;
    for(int i = 0 ; i < a.length() ; i++)
        A[i] = a[i];
    next_permutation(A, A + a.size());
    if(A[0] > a[0])
        printA(a.size());
    else
        cout << 0 << '\n';
    return 0;
}
