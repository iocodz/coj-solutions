#include <bits/stdc++.h>

using namespace std;

string A;

int main()
{
    cin >> A;
    for(int i = 0 ; i < A.size() ; i++)
        if(A[i] == 'i'){
            cout << "N";
            return 0;
        }

    cout << "S";
    return 0;
}
