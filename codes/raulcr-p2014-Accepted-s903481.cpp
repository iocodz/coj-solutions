#include <bits/stdc++.h>

using namespace std;

int N;
string a;

string sol(int k){
    string c = a;
    int cont = 0;
    for(int i = 0 ; cont < k && i < c.size() ; i++)
        if(a[i] == '1')
            c[i] = '0' , cont++;

    for(int i = c.size() - 1 ; cont < k && i >= 0 ; i--)
        if(a[i] == '0')
            c[i] = '1' , cont++;
    return c;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1 ; i <= N ; i++){
        int b; cin >> a >> b;

        cout << "Case #" << i << ": " << sol(b) << '\n';
    }
    return 0;
}
