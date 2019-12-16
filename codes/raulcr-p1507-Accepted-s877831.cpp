#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, int> pin;

const int MAXN = 101;

int N, M;
string Q[MAXN];
vector<pin> P;

pii pr(string &a){
    pii k;

    if(a[0] > '1' && a[0] <= '9')
        k.first = a[0] - '0';
    else if(a[0] == 'A')
        k.first = 1;
    else if(a[0] == 'T')
        k.first = 10;
    else if(a[0] == 'J')
        k.first = 11;
    else if(a[0] == 'Q')
        k.first = 12;
    else if(a[0] == 'K')
        k.first = 13;

    if(a[1] == 'S')
        k.second = 1;
    else if(a[1] == 'H')
        k.second = 2;
    else if(a[1] == 'C')
        k.second = 3;
    else if(a[1] == 'D')
        k.second = 4;

    return k;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        string a;
        for(int i = 1 ; i <= M ; i++){
            cin >> Q[i];
            P.push_back(pin(pr(Q[i]), i));
        }

        sort(P.begin(), P.end());

        cout << Q[P[0].second];
        for(int i = 1 ; i < P.size() ; i++)
            cout << ' ' << Q[P[i].second];
        cout << '\n';
        P.clear();
    }

    return 0;
}
