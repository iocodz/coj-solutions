#include <bits/stdc++.h>

using namespace std;

int N;
int z, x, c;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> a;

    int l = N / 3 + 1;

    int ini = 0;
    int fin = l;

//    cout << ini << ' ' << fin << '\n';

    for(int i = ini ; i < fin ; i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            z++;
        }
    }

    int ax = fin;
    fin = fin + l;
    ini = ax;

//cout << ini << ' ' << fin << '\n';
    for(int i = ini ; i < fin ; i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            x++;
        }
    }

    ax = fin;
    int lon = a.size();
    fin = min(ax + l, lon);
    ini = ax;

    for(int i = ini ; i < fin ; i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            c++;
        }
    }

//    cout << ini << ' ' << fin << '\n';

    cout << z << " " << x << " " << c << '\n';

    return 0;
}
