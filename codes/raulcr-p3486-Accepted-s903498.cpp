#include <bits/stdc++.h>

using namespace std;

const int MAXN = 12;
const int MAXM = 110;

string N[MAXN];
set<char> f[MAXM], c[MAXM], sa[MAXM];

int x[] =  {1, 5,  9, 1, 5,  9, 1, 5,  9};
int xk[] = {3, 7, 11, 3, 7, 11, 3, 7, 11};
int y[] =  {1, 1,  1, 4, 4,  4, 8, 8,  8};
int yk[] = {3, 3,  3, 6, 6,  6,10,10, 10};

bool fl = false;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a;
//    getline(cin, a);
    for(int i = 1 ; i < MAXN ; i++){
        getline(cin, a);
//        cout << a << '\n';

        if(fl)
            continue;

        for(int j = 0 ; j < a.size() ; j++)
            if(a[j] >= '1' && a[j] <= '9')
                N[i] = N[i] + a[j];

//        cout << N[i] << '\n';

        for(int j = 0 ; j < N[i].size() ; j++){
            if(f[i].find(N[i][j]) != f[i].end() || c[j].find(N[i][j]) != c[j].end()){
                fl = true;
                continue;
            }

            f[i].insert(N[i][j]);
            c[j].insert(N[i][j]);

            for(int k = 0 ; k < 9 ; k++)
                if(i >= x[k] && i <= xk[k] && j + 1 >= y[k] && j + 1 <= yk[k]){
                    if(sa[k].find(N[i][j]) == sa[k].end())
                        sa[k].insert(N[i][j]);
                    else
                        fl = true;
                    break;
                }
            }
    }

    if(!fl)
        cout << "CORRECT";
    else
        cout << "WRONG";

    return 0;
}