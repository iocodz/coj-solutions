#include <bits/stdc++.h>

using namespace std;

int N, M;
int fact[10];

void fac(){
    fact[0] = fact[1] = 1;
    for(int i = 2 ; i <= 8 ; i++)
        fact[i] = fact[i - 1] * i;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    fac();

    while(N--){
        cin >> M;

        string A = "";

        for(int i = 1 ; i <= M ; i++)
            A += (i + '0');

        vector<string > V;

        int con = fact[M] / 3;

        do{
            V.push_back(A);
        }while(con-- && next_permutation(A.begin(), A.end()));

        cout << V[V.size() - 1] << '\n';
    }
    return 0;
}
