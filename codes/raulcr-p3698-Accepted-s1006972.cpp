#include <bits/stdc++.h>

using namespace std;

#define cik(i,a , b, c) for(int i =(a); i <=(b); i +=(c))

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

//    freopen(".in", "r", stdin);
//    freopen(".out", "w", stdout);


    int L; cin >> L;
    string A; cin >> A;

    A = " " + A;

    int may = 0, min = 0;
    cik(i, 1, L, 1){
        if('A' <= A[i] && A[i] <= 'Z'){
            may++;
        }
        else if('a' <= A[i] && A[i] <= 'z'){
            min++;
        }

    }

    cout << may << " " << min << "\n";

    return 0;
}
