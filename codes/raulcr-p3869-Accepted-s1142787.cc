#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int a[MAXN], sol;

int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i<= n ; i++){
        cin >> a[i];
    }

//    sort(a, a + n + 1);
    a[0] = 1;
    for(int i = 1 ; i <= n ; i++){
        if(a[i] != a[i - 1]){
            sol += abs(a[i] - a[i - 1]);
        }
    }

    cout << sol + a[n] - 1;
    return 0;
}
