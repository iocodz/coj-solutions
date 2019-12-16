#include <iostream>
#include <string>
//#include <algorithm>

using namespace std;

int N;
string A[16];

string rev(int a){
    string b = A[a - 1], sol = "";

    for (int i = b.length() - 1 ; i >= 0 ; i--){
        if(b[i] == 'L')
            sol += 'R';
        else
            sol += 'L';
    }
    return sol;
}

void precalc(){
    A[1] = "L";

    for (int i = 2 ; i <= 15 ; i++){
        A[i] = (A[i - 1] + "L") + rev(i);
    }
}

int main()
{
    precalc();

    while(cin >> N && N != -1){
        cout << A[N] << '\n';
    }

    return 0;
}
