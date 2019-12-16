#include <bits/stdc++.h>

using namespace std;

int c, sol;
string K;

int main()
{
    cin >> K;

    for(int i = 0 ; i < K.size() ; i++){
        c += ((K[i] == '(') ? (1) : (-1));

        if(c < 0){
            sol++;
            c = 1;
        }
    }

    cout << sol + c / 2;
    return 0;
}
