#include <bits/stdc++.h>

using namespace std;

int N, t;
vector<int> num;
bool prime[30];

void howInowit(){
    do{
        bool sol = 1;
        for(int i = 1 ; i < N; i++){
            if(!prime[num[i] + num[i - 1]]){
                sol = 0;
                break;
            }
        }

        sol = sol & (prime[num[0] + num[N - 1]]);
        if(sol){
            cout << num[0];

            for(int i = 1 ; i < N ; i++)
                cout << ' ' << num[i];
            cout << '\n';
        }
    }while(next_permutation(num.begin() + 1, num.begin() + N));
}

int main()
{
    prime[2] = prime[3] = prime[5] = prime[7] = prime[11] = prime[13] = prime[17] = prime[19] = prime[23] = 1;

    for(int i = 1 ; i <= 14 ; i++)
        num.push_back(i);

    cin >> t;
    for(int j = 1 ; j <= t ; j++){
        sort(num.begin(), num.end());

        cin >> N;

        cout << "Case " << j << ":\n";
        howInowit();
    }

    return 0;
}
