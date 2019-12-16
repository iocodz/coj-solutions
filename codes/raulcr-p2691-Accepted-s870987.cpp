///by taskkill
#include <bits/stdc++.h>

using namespace std;

int N, M;
int t[2];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    int a;
    for(int i = 1 ; i <= N ; i++){
        cin >> a;
        t[0] += a;
    }

    for(int i = 1 ; i <= M ; i++){
        cin >> a;
        t[1] += a;
    }

    if(t[0] == t[1])
        cout << "tie";
    else if(t[0] > t[1])
        cout << "first win";
    else
        cout << "second win";

    return 0;
}
