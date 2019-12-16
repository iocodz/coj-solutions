#include <bits/stdc++.h>

using namespace std;

map<long long, long long> dp;

long long f(long long num){
    if(dp.find(num) != dp.end())
        return dp[num];
    if(num <= 4LL)
        return num;
    dp[num] = max(num, f(num / 2) + f(num / 3) + f(num / 4));
    return dp[num];
}

int main()
{
    long long N = 10, M;
    while(N--){
        cin >> M;
        cout << max(f(M), M) << '\n';
    }
    return 0;
}
