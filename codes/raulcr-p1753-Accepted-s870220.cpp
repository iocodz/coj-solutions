///by taskkill
#include <bits/stdc++.h>

using namespace std;

int N;
string M;

void conv(){
    string end = "";

    for(int i = 0 ; i < M.size() ; i++){
        if((M[i] >= 'A' && M[i] <= 'C') || (M[i] >= 'a' && M[i] <= 'c'))
            end += "2";
        if((M[i] >= 'D' && M[i] <= 'F') || (M[i] >= 'd' && M[i] <= 'f'))
            end += "3";
        if((M[i] >= 'G' && M[i] <= 'I') || (M[i] >= 'g' && M[i] <= 'i'))
            end += "4";
        if((M[i] >= 'J' && M[i] <= 'L') || (M[i] >= 'j' && M[i] <= 'l'))
            end += "5";
        if((M[i] >= 'M' && M[i] <= 'O') || (M[i] >= 'm' && M[i] <= 'o'))
            end += "6";
        if((M[i] >= 'P' && M[i] <= 'S') || (M[i] >= 'p' && M[i] <= 's'))
            end += "7";
        if((M[i] >= 'T' && M[i] <= 'V') || (M[i] >= 't' && M[i] <= 'v'))
            end += "8";
        if((M[i] >= 'W' && M[i] <= 'Z') || (M[i] >= 'w' && M[i] <= 'z'))
            end += "9";
    }

    M = end;
}

bool pal(){
    int i = 0, j = M.size() - 1;

    while(i < j){
        if(M[i] != M[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        conv();

        if(pal())
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
