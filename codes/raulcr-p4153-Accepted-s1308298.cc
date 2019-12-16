#include <bits/stdc++.h>

using namespace std;

const int MAX = 5e6 + 5;

vector<int> arr;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, T; cin >>N >>T;

    for(int i =1 ; i <= (1 << N); i++){
        int x; cin >>x;
        arr.push_back(x);
    }

    if(T % 2 == 1){
        reverse(arr.begin(), arr.end());
    }

    for(int i = 0; i < (1 << N); i++){
        if(i != ((1 << N) - 1))cout <<arr[i] <<" ";
        else cout <<arr[i] <<"\n";
    }

    return 0;
}
