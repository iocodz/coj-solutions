#include <bits/stdc++.h>

using namespace std;

int sol;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while(n--){
    string a;
    cin >> a;

    string b = "";
    for(int i = a.size() - 1 ; i >= 0 ; i--)
        b+=a[i];
    cout << b << '\n';
    }
	return 0;
}
