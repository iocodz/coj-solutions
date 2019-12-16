#include <bits/stdc++.h>

using namespace std;

int N, sol;

int main()
{
    int ma, me;

    cin >> N;

    int k;
    for(int i = 1 ; i <= N ; i++){
        cin >> k;
        if(i == 1)
            ma = me = k;
        if(k > ma){
            sol++;
            ma = k;
        }
        if(k < me){
            sol++;
            me = k;
        }
    }

    cout << sol;
    return 0;
}
