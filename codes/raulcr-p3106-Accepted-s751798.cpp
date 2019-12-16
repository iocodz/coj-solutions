#include <bits/stdc++.h>

using namespace std;

string A, B;

bool pal(){
    int i = 0, j = A.size() - 1;

    while(i < j){
        if(A[i] != A[j])
            return 0;
        i++;
        j--;
    }
    return true;
}

int main()
{
    cin >> A >> B;

    A = A + B;

    if(pal())
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
