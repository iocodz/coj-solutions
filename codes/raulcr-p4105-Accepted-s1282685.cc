#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N;
    cin >> N;
    long long sum;
    if(N & 1LL) sum = ((N + 1) / 2LL) * N;
    else sum = (N + 1LL) * (N / 2LL);
    for(int i = 1 ; i < N ; i++){
        long long a;
        cin >> a;
        sum -= a;
    }

    cout << sum << '\n';


    return 0;
}
