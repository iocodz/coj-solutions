#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e4 + 5;

int N, f[4];
char a[MAX];

void sol(char b){
    string s = "";
    for(int i = 0 ; i < N ; i++)
        s += b;
    cout << s << '\n';
}

void findsol(){
    int pos = 0;
    for(int i = 0 ; i < 4 ; i++)
        if(f[pos] > f[i]) pos = i;
    cout << f[pos] << '\n';
    if(pos == 0) sol('A');
    else if(pos == 1) sol('C');
    else if(pos == 2) sol('G');
    else sol('T');
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> a;

    for(int i = 0 ; i < N ; i++){
        f[0] += (a[i] == 'A');
        f[1] += (a[i] == 'C');
        f[2] += (a[i] == 'G');
        f[3] += (a[i] == 'T');
    }

    if(!f[0]){
        cout << 0 << '\n';
        sol('A');
    }
    else if(!f[1]){
        cout << 0 << '\n';
        sol('C');
    }
    else if(!f[2]){
        cout << 0 << '\n';
        sol('G');
    }
    else if(!f[3]){
        cout << 0 << '\n';
        sol('T');
    }
    else findsol();

    return 0;
}

/*
2
BB
AA
*/
