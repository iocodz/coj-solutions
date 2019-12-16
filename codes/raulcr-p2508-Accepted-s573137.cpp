#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A;
    cin >> A;

    int c = 0, sol = 0;

    for (int i = 0 ; i < A.length() ; i++){
        if (A[i] == '(')
            c++;

        else if (A[i] == ')')
            c--;

        if (c < 0){
            sol++;
            c = 1;
        }
    }
    if (c > 0)
        sol += (c / 2);
    cout << sol << '\n';

    return 0;
}
