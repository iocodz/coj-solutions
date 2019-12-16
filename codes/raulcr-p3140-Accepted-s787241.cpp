#include <bits/stdc++.h>

using namespace std;

int N;
vector <int> V;

int main()
{
    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        int a;
        cin >> a;
        V.push_back(a);
    }

    sort(V.begin(), V.end());

    for(int i = 0 ; i < V.size() ; i++)
        cout << V[i] << '\n';
    
    return 0;
}
