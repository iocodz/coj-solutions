#include <bits/stdc++.h>

using namespace std;

int n;
set<int> p, i;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while(n--){
        char a;
        cin >> a;
        if(a == 'q'){
            long long k = p.size();
            long long kk = i.size();
            long long s1 = 0, s2 = 0;
            if(k > 2)
                s1 = (k * (k - 1) * (k - 2)) / 6;
            if(kk > 1)
                s2 = (k * (kk - 1) * kk) / 2;
            cout << s1 + s2 << '\n';

        }
        else if(a == 'i'){
            int b; cin >> b;
            if(b & 1)
                i.insert(b);
            else
                p.insert(b);
        }
        else{
            int b; cin >> b;
            if(i.find(b) != i.end())
                i.erase(b);
            if(p.find(b) != p.end())
                p.erase(b);
        }
    }
}
