#include <bits/stdc++.h>

using namespace std;

int N;
set<string> S;
string A[] = {"A", "B", "C", "D", "E", "F", "G", "H"};

void prec(){
    for(int i = 1 ; i <= 8 ; i++){
        int j;
        if(i % 2 == 1)
            j = 1;
        else
            j = 2;
        for( ; j <= 8 ; j += 2){
            string b = A[i - 1];
            char bb = (j + '0') ;
            S.insert(b + bb);
        }
    }
}

int main()
{
    prec();
    cin >> N;
    int cn, cb;
    cn = cb = 0;
    while(N--){
        string B;
        cin >> B;
        if(S.find(B) != S.end())
            cn++;
        else
            cb++;
    }

    cout << max(cn, cb) - min(cb, cn);

    return 0;
}
