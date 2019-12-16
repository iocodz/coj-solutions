#include <bits/stdc++.h>

using namespace std;

int N, s;
vector<int> d;

bool prime(int k){
    if(k == 2)
        return 1;
    if(k < 2 || k % 2 == 0)
        return 0;

    for(int i = 3 ; i * i <= k ; i += 2)
        if(k % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N > 0){
        d.push_back(N % 10);
        N /= 10;
    }

    sort(d.begin(), d.end());

    do{
        int num_br = 0;

        for(int i = 0 ; i < d.size() ; i++)
            num_br = (num_br * 10) + d[i];

        if(prime(num_br))
            s++;

    }while(next_permutation(d.begin(), d.end()));

    cout << s;

    return 0;
}
