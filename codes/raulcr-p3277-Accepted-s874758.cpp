#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        int a;
        cin >> a;

        m.push_back(a);
    }

    sort(m.begin(), m.end());

    int d = m[0] - m[1];

    for(int i = 2 ; i < N ; i++)
        if(m[i - 1] - m[i] != d){
            cout << "NO\n";
            return 0;
        }

    cout << "YES\n";

    return 0;
}
