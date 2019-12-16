#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int a[11];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, maxi = 0;
    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= 10 ; j++)
            cin >> a[j];
        int sum = 0;
        sort(a + 1, a + 11);
        for(int j = 2 ; j < 10 ; j++)
            sum += a[j];

        if(sum > maxi) maxi = sum;

        cout << i << ' ' << sum << '\n';
    }

    cout << maxi << '\n';

	return 0;
}
