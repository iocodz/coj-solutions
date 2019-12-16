#include <bits/stdc++.h>

using namespace std;

int N;
int t[200], a[200];

int main()
{
    while(cin >> N){
        for(int i = 1  ; i <= N ; i++)
            cin >> a[i];

        for(int i = 1  ; i <= N ; i++){
            t[i] = 0;
            t[i] = t[i - 1] + a[i];
        }

        int sol = 0;
        for(int i = 1 ; i <= N ; i++)
            if((t[N] - a[i]) % 2 == 0) sol++;

        cout << sol << '\n';
    }
    return 0;
}
