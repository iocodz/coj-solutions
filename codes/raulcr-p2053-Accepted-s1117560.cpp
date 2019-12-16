#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(cin >> N && N != -1){
        int sol = 0;

        for(int i = 0 ; i < N ; i++)
            for(int j = i ; j * i <= N && j <= N ; j++){
                if(!(i + j) || (N - i * j) % (i + j) != 0)
                    continue;
                int k = (N - i * j) / (i + j);
                if(k >= j){
                    sol++;
                    //cout << i << ' ' << j << ' ' << k <<'\n';
                }
            }

        cout << sol << '\n';
    }

    return 0;
}
