#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int sol[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        for(int i = 0 ; i < b ; i++)
        for(int j = 0 ; j < a ; j++){
            int c; cin >> c;
            sol[j] += c;
        }
        int w = 0;
        for(int i = 1 ; i < a ; i++) if(sol[w] < sol[i]) w = i;

        cout << ++w << '\n';

        fill(sol, sol + a, 0);
    }
	return 0;
}
