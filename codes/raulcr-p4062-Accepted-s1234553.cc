#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;

        if(a == "P=NP"){
            cout << "skipped\n";
            continue;
        }
        int q, w;
        q = w = 0;

        bool f=false;

        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] == '+') { f = 1; continue;}
            if(!f){
                q = q * 10 + (a[i] - '0');
            }
            else{
                w = w * 10 + (a[i] - '0');
            }
        }

        cout << q + w << '\n';
    }
    return 0;
}
