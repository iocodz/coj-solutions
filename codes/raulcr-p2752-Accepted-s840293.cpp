#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int N;
string names[MAXN];
int p[MAXN];

int main()
{
    //freopen("a.in", "r", stdin);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> names[i] >> p[i];

    cout << "FOREVER ALONE ones:\n";
    for(int i = 1 ; i <= N ; i++){
        bool k = false;

        for(int j = 1 ; !k && j <= N ; j++)
            if(p[i] == -p[j])
                k = true;

        if(!k)
            cout << names[i] << '\n';
    }

    return 0;
}
