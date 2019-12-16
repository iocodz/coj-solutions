#include <bits/stdc++.h>

using namespace std;

int a;

bool toa(){
    while(a > 0){
        if(a % 4 == 0 || a % 4 == 2){
            a /= 4;
            continue;
        }
        return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> a;

        if(toa())
            cout << "Case #" << i << ": Erick\n";
        else
            cout << "Case #" << i << ": Jai\n";
    }

    return 0;
}
