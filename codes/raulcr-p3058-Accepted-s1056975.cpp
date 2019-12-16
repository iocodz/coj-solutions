#include <bits/stdc++.h>

using namespace std;

string N;
long long a, b, c, sol, k;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for(int i = 0 ; i < N.size() ; i++){
        if(N[i] >= 'a' && N[i] <= 'z'){
            k = a = b = c = 0;
            continue;
        }

        k = (k + (N[i] - '0')) % 3;

        if(k == 0){
            a++;
            sol += a;
        }

        if(k == 1){
            sol += b;
            b++;
        }

        if(k == 2){
            sol += c;
            c++;
        }
    }

    cout << sol;


    return 0;
}
