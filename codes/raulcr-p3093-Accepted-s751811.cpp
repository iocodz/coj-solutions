#include <bits/stdc++.h>

using namespace std;

#define in(k) (A[k] - 64)

string A;
int sol = 1;

int main()
{
    cin >> A;

    for(int i = 0 ; i < A.size() ; i++)
        sol = (sol * in(i)) % 26;

    if(sol < 10)
        cout << 0;

    cout << sol;
    return 0;
}
