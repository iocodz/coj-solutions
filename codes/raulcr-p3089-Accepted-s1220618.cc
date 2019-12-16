//============================================================================
// Name        : CodeForces.cpp
// Author      : No me acuerdo
// Version     :
// Copyright   : Realy?? Free for geeks
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int sol, a[8][8];
map<int, string> name;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    name[1] = "dormilon";
    name[2] = "feliz";
    name[3] = "mudito";
    name[4] = "timido";
    name[5] = "grunnon";
    name[6] = "mocoso";
    name[7] = "sabio";

	for(int i = 1 ; i <= 7 ; i++)
        for(int j = 1 ; j <= 7 ; j++){
            cin >> a[i][j];
            if(j == 1)
                a[i][0] ++;
            else if(j == 2)
                a[i][0] += a[i][j] * 5;
            else if(j == 3)
                a[i][0] += a[i][j] * 10;
            else if(j == 4)
                a[i][0] += a[i][j] * 15;
            else if(j == 5)
                a[i][0] += a[i][j] * 20;
            else if(j == 6)
                a[i][0] += a[i][j] * 25;
            else if(j == 7)
                a[i][0] += a[i][j] * 30;
        }
    int fq = 1;
    sol = 1;
    for(int i = 2 ; i <= 7 ; i++)
        if(a[i][0] > a[sol][0]) sol = i;
        else if (a[i][0] == a[sol][0]) fq++;

    if(fq == 1)
    cout << name[sol];
    else cout << "Blancanieve y los siete enanitos";
	return 0;
}
