///by taskkill
#include <bits/stdc++.h>

using namespace std;

int N;
string S;

bool div4(){
    int d, k = 1;
    long long nm = 0;

    for(int i = 0 ; i < S.size() ; i++){
        d = (int)(S[i] - '0') % 4;
        nm = (nm + (d * k) % 4) % 4;
        k *=3; k %= 4;
    }

    return !nm;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> S;

        if(div4())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
