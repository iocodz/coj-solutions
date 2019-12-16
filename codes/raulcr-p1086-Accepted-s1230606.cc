#include <bits/stdc++.h>

using namespace std;

const int MAXN = 4567900;

bitset<MAXN> mk;
vector<int>pr;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    mk[1] = false;
    for(int i = 2 ; i < MAXN ; i++){
        if(!mk[i]){
            pr.push_back(i);
            for(int j = i * 2 ; j < MAXN ; j += i)
                mk[j] = true;
        }
    }

    for(int k = 1 ; k <= 10 ; k++){
        int n;
        cin >> n;
        cout << upper_bound(pr.begin(), pr.end(), n) - pr.begin() << '\n';
    }
    return 0;
}
