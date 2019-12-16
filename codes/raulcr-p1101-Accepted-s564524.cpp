#include <iostream>
#include <string>
#include <algorithm>
#define MAXN 200001

using namespace std;

bool P[MAXN];

bool pal(string a){
    int x = 0;
    for (int i = a.length() - 1 ; i > x ; i--, x++){
        if (a[i] != a[x])
            return 0;
    }
    return 1;
}

string binar(int x){
    string sol = "";

    while (x > 0){
        sol += ((x % 2) + '0');
        x /= 2;
    }

    return sol;
}

void precalc(){
    for (int i = 1 ; i <= MAXN ; i++){
        if (pal(binar(i))){
            P[i] = true;
        }
    }
}


int main()
{
    precalc();
    int K;
    cin >> K;

    while (K > 0){
        int A, B;
        cin >> A >> B;

        bool f = 0;

        for (int i = A ; i <= B ; i++){
            if (P[i] && !f){
                cout << i;
                f = 1;
            }
            else 
            if (P[i])
                cout << ' ' << i;
        }
        cout << '\n';

        K--;
    }
    return 0;
}
