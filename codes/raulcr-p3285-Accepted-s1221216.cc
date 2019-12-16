#include <bits/stdc++.h>

using namespace std;

long long N;
string a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> N >> a;
        N = N % a.size();
//        cout << N << ' ';
        for(int i = a.size() - N ; i < a.size() ; i++) cout << a[i];
        for(int i = 0 ; i < a.size() - N ; i++) cout << a[i];
        cout << '\n';
    }

	return 0;
}
