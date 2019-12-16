#include <bits/stdc++.h>

using namespace std;

int N;
string a, b;

int main()
{
    cin >> N;

    while(N--){
        int k = 0;

        cin >> a >> b;

        for(int i = 0 ; i < a.size() ; i++)
            if(a[i] != b[i])
                k++;

        cout << k << '\n';
    }
    return 0;
}
