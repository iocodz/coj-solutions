#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e4 + 5;

bool criba[MAX];

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    for(int i = 2; i * i < MAX; i++){
        if(!criba[i])
            for(int j = i*2; j < MAX; j+=i){
                criba[j] = true;
            }
    }

    int N;

    while(cin >>N && N){
        int sol = 0;
        for(int i = 2; i <= N; i++){
            if(!criba[i]) sol += i;
        }
        cout <<sol <<"\n";
    }


    return 0;
}
