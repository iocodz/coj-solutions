#include <bits/stdc++.h>

using namespace std;

string a, b;

int value(int i, int j){
    int ret = 0, pot2 = 1;
    int mod = 1000000007;
    for( ; j >= i ; j--){
        if(a[j] == '1')
            ret = (ret + pot2) % mod;
        pot2 = (pot2 * 2) % mod;
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a;

    for(int i = 0 ; i < a.size() ; i++){
        if(a[i] == '1' || a[i] == '0'){
            int c = 0;
            int j = i + 1;
            for(;  j < a.size() ; j++){
                if(a[j] == '1' || a[j] == '0'){
                    c++;
                }
                else break;
            }
            cout << value(i, j - 1);
            i = i + c;
        }
        else cout << a[i];
    }
	return 0;
}
