#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3 + 1;

int N;
string cad;

int main()
{
//    freopen(".in", "r", stdin);
//    freopen(".out", "w", stdout);

    cin >> N;


    while(N--){

        cin >> cad;

        int lsc = 1;
        int ol = 0;

        for(int i = 1 ; i < cad.size() ; i++){
            if(cad[i] == cad[ol]){
                ol++;
                if(ol >= lsc)
                    ol = 0;
            }
            else {
                if(ol){
                    ol = 0;
                    i = lsc;
                    lsc++;
                }
                else {
                    ol = 0;
                    lsc = i + 1;
                }
            }
        }

        if(ol)
            lsc = cad.size();

        cout << lsc << '\n';
    }

    return 0;
}
