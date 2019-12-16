#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;

int N, M;
bitset<MAXN> mk;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    mk[0] = true;
    for(int i = 2 ; i < MAXN ; i++)
        if(!mk[i]){
            for(int j = i + i ; j < MAXN ; j += i)
                mk[j] = true;
        }

    vector<int> v;

    cin >> N >> M;
    while(N){
        int k = N % M;
        N /= M;
        if(!mk[k])
            v.push_back(k);
    }

    sort(v.begin(), v.end());

//    if(v.size()){
        cout << v.size();
        for(int i = 0 ; i < v.size() ; i++)
            cout << ' ' << v[i];
//    }
    return 0;
}

/*



*/
