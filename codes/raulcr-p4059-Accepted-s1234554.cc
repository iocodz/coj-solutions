#include <bits/stdc++.h>

using namespace std;

int N, M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string a, b;
    cin >> a >> b;


    int i = 0;
    for( ; i < a.size() ; i++){
        if(a[i] != b[i]) break;
    }

    int fia = a.size() - 1;
    int fib = b.size() - 1;
    int cont = 0;
    while(a[fia] == b[fib] && fia >= i && fib >= i){
        fia--;
        fib--;
        cont++;
    }

    cout << b.size() - i - cont << '\n';



    return 0;
}
