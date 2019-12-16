///by taskkill
#include <bits/stdc++.h>

using namespace std;

#define gold first.first
#define silver first.second
#define bronze second.first
#define id second.second

typedef pair<int, int> pii;
typedef pair<pii, pii> contr;

vector<contr> k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a = 0, b, c, d;
    while(cin >> b >> c >> d){
        a++;
        k.push_back(contr(pii(b, c), pii(d, a)));
    }

    sort(k.begin(), k.end());

    for(int i = a - 1 ; i >= 0 ; i--){
        cout << "Facultad " << k[i].id << ' ' << k[i].gold << ' ' <<
            k[i].silver << ' ' << k[i].bronze << '\n';
    }
    return 0;
}
