#include <iostream>
#include <string>

using namespace std;

const int MAXN = 31;

long long I[MAXN];
long long F[MAXN];

void precalc(){
    int i = 1, k = 1;
    for (; k < MAXN ;){
        I[k] = i;
        i = i * 2 + 1;
        F[k] = i - 1;
        //cout << k << " " << I[k] << " " << F[k] << "\n";
        k++;
    }
}

string covtobn(int a, int l){
    string n = "";

    while (a > 0){
        char c = ((a % 2) + '0');
        n = c + n;
        a /= 2;
    }

    while (n.length() < l)
        n = "0" + n;

    return n;
}

string sretan(string k){
    string sol = "";

    for (int i = 0 ; i < k.length() ; i++){
        if (k[i] == '0')
            sol += '4';
        else
            sol += '7';
    }

    return sol;
}

int main()
{
    precalc();
    int a;
    cin >> a;

    int i = 1;
    for ( ; i <= MAXN ; i++)
        if (a >= I[i] && a <= F[i])
            break;

        cout << sretan(covtobn(a - I[i] , i));

    return 0;
}
