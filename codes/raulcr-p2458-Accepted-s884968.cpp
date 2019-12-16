#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL N;

LL ret(LL a){
    if(a % 2)
        return (a + 1) / 2 * a;
    return a / 2 * (a + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    while(cin >> N && N){
        LL in = 1, fin = 2 * 1e9;

        while(fin - in > 5){
            LL mt = (in + fin) / 2;

            if(N <= ret(mt))
                fin = mt;
            else
                in = mt - 1;
        }

        LL s = 0;

        for(int i = fin ; i >= in ; i--)
            if(N <= ret(i))
                s = i;

        cout << s << '\n';
    }
    return 0;
}
