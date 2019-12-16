#include <bits/stdc++.h>

using namespace std;

int N, M, sol;

int conv(int k){
    int k1 = 0;

    vector<int> v;

    while(k > 0){
        v.push_back(k % 10);
        k /= 10;
    }

    sort(v.begin(), v.end());

    for(int i = 0 ; i < v.size() ; i++){
        if(v[i])
            k1 = (k1 * 10) + v[i];
    }

    return k1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(1){
        int M = conv(N);
        if(!M)
            break;

        N = N - M;

        sol++;
    }

    cout << sol;

    return 0;
}
