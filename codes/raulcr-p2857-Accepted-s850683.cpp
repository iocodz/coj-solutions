#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;

int sol = 1;
bool num[MAXN];

int main()
{
//    freopen("a.in", "r", stdin);
//    freopen("a.out", "w", stdout);

    int N;
    while(scanf("%d", &N) != EOF){
        if(num[N] && sol < N)
            sol = N;
        else
            num[N] = true;
    }

    for(int i = 2 ; i < MAXN ; i++){
        int cont = 0;
        for(int j = i ; j < MAXN ; j += i)
            if(num[j]){
                cont++;
                if(cont >= 2 && i > sol){
                    sol = i;
                    break;
                }
            }
    }

    cout << sol;


    return 0;
}
