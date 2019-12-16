#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1e5 + 1;
int G, A;
int T;
int Gi[MAXN];
int Ai[MAXN];

void precalcG(){
    for (int i = 1 ; i <= MAXN ; i++){
        if(__gcd(i, G) == 1)
            Gi[i] = Gi[i - 1] + 1;
        else
            Gi[i] = Gi[i - 1];
    }
}

void precalcA(){
    for (int i = 1 ; i <= MAXN ; i++){
        if(__gcd(i, A) == 1)
            Ai[i] = Ai[i - 1] + 1;
        else
            Ai[i] = Ai[i - 1];
    }
}

int main(){
    cin >> G >> A;

    precalcG();
    precalcA();

    int aa = 0, bb = 0;

    cin >> T;
    while(T--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cin >> G >> A;

        if(Gi[a2] - Gi[a1 - 1] == G)
            aa += 2;
        else
            aa--;
        if(Ai[b2] - Ai[b1 - 1] == A)
            bb += 2;
        else
            bb--;
    }

    if(aa > bb)
        cout << "Anders wins";
    else if(bb > aa)
        cout << "Garfield wins";
    else
        cout << "Draw";
	return 0;
}
