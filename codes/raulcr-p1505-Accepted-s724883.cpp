#include <bits/stdc++.h>

using namespace std;

vector<int> Imp;
queue<int> Q;

int main()
{
    for(int i = 1; i <= 9; i+=2)
        Q.push(i);
    while(!Q.empty())
    {
        int n = Q.front();
        Q.pop();
        Imp.push_back(n);
        if (n < 100000000){
            n *= 10;
            for(int i = 1; i <= 9; i+=2)
                Q.push(n + i);
        }
    }

    //cout << Imp.size();

    int cas;
    cin >> cas;
    while(cas--)
    {
        int A , B;
        cin >> A >> B;
        int impares = upper_bound(Imp.begin(), Imp.end(), B) -
                      lower_bound(Imp.begin(), Imp.end(), A);
        cout << B - A + 1 - impares << '\n';
    }
    return 0;
}
