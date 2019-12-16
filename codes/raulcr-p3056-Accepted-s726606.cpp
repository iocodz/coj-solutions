#include <bits/stdc++.h>

using namespace std;

int A[6], B[6];
bool flag;

int main()
{
    for(int i = 1; i <= 5 ; i++)
        cin >> A[i];
    for(int i = 1; i <= 5 ; i++){
        cin >> B[i];
        if(A[i] == B[i])
            flag = true;
    }

    if(flag)
        cout << "N";
    else
        cout << "Y";
    return 0;
}
