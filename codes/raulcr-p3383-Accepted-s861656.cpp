#include <bits/stdc++.h>

using namespace std;

int part, sets, jueg, dif;
int a, b;
int sol1, sol2;
string pars;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> part >> sets >> jueg >> dif >> pars;

    for(int i = 0 ; i < pars.size() ; i++){
        a += (pars[i] == 'A');
        b += (pars[i] == 'B');

        if(a - b >= dif && a >= jueg){
            sol1++;
            a = b = 0;
        }
        else if(b - a >= dif && b >= jueg){
            sol2++;
            a = b = 0;
        }
    }

    cout << sol1 << ' ' << sol2;

    return 0;
}
