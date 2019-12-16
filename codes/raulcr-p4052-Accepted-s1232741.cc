#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        string a;
        cin >> a;
        for(int i = 0 ; i < a.size() ; i+=2)
        {
            int c = a[i] - '0';
            for(int j = 0 ; j < c ; j++) cout << a[i + 1];
        }

        cout << '\n';
    }
	return 0;
}

