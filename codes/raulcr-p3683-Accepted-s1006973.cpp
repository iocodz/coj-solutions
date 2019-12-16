#include <bits/stdc++.h>

using namespace std;

#define cik(i,a , b, c) for(int i =(a); i <=(b); i +=(c))

set<int> S;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    S.insert(0);
    S.insert(int(1e6));

    int T; cin >> T;

    cik(t, 1, T, 1){
        int a; cin >> a;

        set<int>::iterator it, it1, it2;
        if(S.find(a) != S.end()){
            cout << a << " " << a << "\n";
        }

        else{
            S.insert(a);

            it = S.find(a);


            it--;
            it1 = it;
            it++;it++;
            it2 = it;

            cout << *it1 << " " << *it2 << "\n";
        }
    }
    return 0;
}
