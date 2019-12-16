#include <bits/stdc++.h>

using namespace std;

int sol;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    cin >> a;
    for(char i: a){
        if(i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u')
            sol += ((i - 'a') + 1);
    }

    cout << sol;

	return 0;
}
