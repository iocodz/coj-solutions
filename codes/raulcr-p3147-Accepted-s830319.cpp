#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int mt[MAXN];
int N, k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> k;
    while(k--){
        cin >> N;
        for(int i = 1 ; i <= N ; i++)
            cin >> mt[i];

        for(int i = 1 ; i <= N ; i++){
            int sum = 0;
            for(int j = i ; j <= N ; j++){
                sum += mt[j];
                if(sum == 0){
                    cout << "YES\n";
                    goto A;
                }
            }
        }

        cout << "NO\n";
        A:
        N = N;
    }
    return 0;
}
