#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<int> fac;
vector<int> fac1;

void desc(){
    for(int i = 1 ; i <= N ; i++)
        if(N % i == 0)
            fac.push_back(i);

    for(int i = 1 ; i <= M ; i++)
        if(M % i == 0)
            fac1.push_back(i);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    desc();

    for(int i = 0 ; i < fac.size() ; i++)
        for(int j = 0 ; j < fac1.size() ; j++)
            cout << fac[i] << ' ' << fac1[j] << '\n';

    return 0;
}
