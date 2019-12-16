#include <bits/stdc++.h>

using namespace std;

int N, M;
map<string, int> fq;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for(int i = 1 ; i <= N ; i++){
        string a, b;
        cin >> a >> b;
        fq[b]++;
    }

    cin >> N;
    for(int i = 1 ; i <= N ; i++){
        string a, b;
        cin >> a >> b;
        if(fq.find(b) != fq.end()) cout << fq[b] << '\n';
        else cout << 0 << '\n';
    }

	return 0;
}
