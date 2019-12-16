#include <bits/stdc++.h>

using namespace std;

string A, B;

bool check(int i, int e){
    int k = 0;
    for ( ; i <= e ; i++ , k++)
        if(A[i] != B[k])
            return 0;
    return 1;
}

string conv(int i, int j){
    string a = A.substr(0, i);
    string b = A.substr(j, A.length() - 1);
    //cout << a << ' ' <<  b << ' ';
    return a + b;
}

int main()
{
    //freopen("e.txt", "r", stdin);
    int K;
    cin >> K;

    while(K--){
        cin >> A >> B;
        int sol = 0;

        for (int i = 0 ; i < A.length() ; i++){
            if(A[i] == B[0]){
                if(check(i, i + B.length() - 1)){
                    sol++;
                    A = conv(i, i + B.length());
                    i = -1;
                }
            }
        }
        cout << sol << endl;
    }

    return 0;
}
