#include <bits/stdc++.h>

using namespace std;

int M[101];

int main()
{
    //freopen("a.txt", "r", stdin);
    int a = 1;
    while(cin >> M[a])a++;

    sort(M + 1, M + a);

    int may = 0;

    for (int i = a - 1 ; i >= 2 ; i--)
        for (int j = i - 1 ; j >= 1 ; j--){
            if(M[i] > may && M[j] > may){
                int K = __gcd(M[i], M[j]);
                if(K > may)
                    may = K;
            }
            else
            	break;
    }

    cout << may;

    return 0;
}
