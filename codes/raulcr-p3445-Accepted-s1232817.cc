#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vpii;

const int MAXN = 4 * 1e4 + 5;
const int MAXM = 1e4 + 5;

int t[MAXN];
int der, izq, k, n;

void update(int ini, int fin, int nod)
{
    if(ini>der || fin < izq) return;
    if(ini>= izq && fin <= der )
    {
        t[nod] += k;
        return;
    }
    if(ini == fin) return;

    int iz = nod * 2, de = nod * 2 + 1;

    int med = (ini + fin) / 2;

    update(ini, med, iz);
    update(med + 1, fin, de);

    t[nod] = max(t[iz], t[de]);
}

int query(int ini, int fin, int nod)
{
    if(izq > der) return 0;

    if(ini > der || fin < izq) return 0;

    if(ini >= izq && fin <= der) return t[nod];

    int iz = nod * 2, de = nod * 2 + 1;

    int med = (ini + fin) / 2;

    int a = query(ini, med, iz);
    int b = query(med + 1, fin, de);

    return max(a, b);
}

vpii li;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;


    for(int i = 1 ; i <= n ; i++ )
    {
        int a, b;
        cin >> a >> b;

        li.push_back(pii(a + 2, b + 2 + a));
    }

    sort(li.begin(), li.end());
    int mx = 0;
    for(int i = 0 ; i < n ; i++)
    {
        izq = 1;
        der  = li[i].first;
        int q = query(1, MAXM, 1);
        izq = der = li[i].second;
        k = query(1, MAXM, 1);
        k = abs(k - (q + 1));


        update(1, MAXM, 1);
    }

    izq = 1;
    der = MAXM;
    mx = query(1, MAXM, 1);

    cout << mx << '\n';

    return 0;
}
