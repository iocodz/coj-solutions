#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int N;
int r[5], l[5];
int d[5];
int arr[100];

int m[10][10];

bool verifica(){
    int pos = 1;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            m[i][j] = arr[pos];
            pos++;
        }
    }
    int s = 0;
    for(int i = 1; i <= N; i++){
        s += m[1][i];
    }
    if(s != r[1]) return 0;

    s = 0;
    for(int i = 1; i <= N; i++){
        s += m[2][i];
    }
    if(s != r[2]) return 0;

    s = 0;
    for(int i = 1; i <= N; i++){
        s += m[3][i];
    }
    if(s != r[3]) return 0;

    s = 0;
    for(int i = 1; i <= N; i++){
        s += m[i][1];
    }
    if(s != l[1]) return 0;

    s = 0;
    for(int i = 1; i <= N; i++){
        s += m[i][2];
    }
    if(s != l[2]) return 0;

    s = 0;
    for(int i = 1; i <= N; i++){
        s += m[i][3];
    }
    if(s != l[3]) return 0;

    s = m[1][1] + m[2][2] + m[3][3];
    if(s != d[1]) return 0;

    if(N == 3){
        s = m[1][3] + m[2][2] + m[3][1];
        if(s != d[2]) return 0;
    }else if(N == 2){
        s = m[2][1] + m[1][2];
        if(s != d[2]) return 0;
    }else{
        s = m[1][1];
        if(s != d[2]) return 0;
    }
    return 1;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >>N;

    for(int i = 1; i <= N*N; i++){
        cin >>arr[i];
    }

    for(int i = 1; i <= N; i++){
        cin >>r[i];
    }

    for(int i = 1; i <= N; i++){
        cin >>l[i];
    }

    for(int i = 1; i <= 2; i++){
        cin >>d[i];
    }

    sort(arr+1, arr+1+N*N);

    do{
            if(verifica()){
                cout <<"Yes\n";
                return 0;
            }
    }while(next_permutation(arr + 1, arr + N*N + 1) );

    cout <<"No\n";

    return 0;
}

