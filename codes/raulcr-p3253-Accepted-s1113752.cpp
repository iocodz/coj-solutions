#include<bits/stdc++.h>

using namespace std;

int sol;
set < int > s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    while(N--){
        int k; cin >> k;
        while(k--){
            int e; cin >> e;
            s.insert(e);
        }
    }

    cout << s.size();
    return 0;
}
