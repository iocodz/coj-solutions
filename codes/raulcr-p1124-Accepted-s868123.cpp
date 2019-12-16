#include <bits/stdc++.h>

using namespace std;
using namespace __gnu_cxx;

const int MAXN = 1e6 + 1;

int N;
bool mk[MAXN];
vector<int> P;
set<int> S;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    mk[0] = mk[1] = 1;
    for(int i = 2 ; i < MAXN ; i++)
        if(!mk[i]){
            P.push_back(i);
            S.insert(i);
            for(int j = 2 * i ; j < MAXN ; j += i)
                mk[j] = 1;
        }

    while(cin >> N && N){
        for(int i = 0 ; i < P.size() ; i++){
            if(S.find(N - P[i]) != S.end()){
                int a = P[i], b = N - P[i];
                if(a > b)
                    swap(a, b);
                cout << N << " = " << a << " + " << b;
                goto Press;
            }
        }

        cout << "Goldbach's conjecture is wrong.";

        Press:
        cout << '\n';
    }

    return 0;
}
