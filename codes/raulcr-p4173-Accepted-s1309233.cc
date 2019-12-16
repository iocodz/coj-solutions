#include <bits/stdc++.h>

using namespace std;

bool pal(string & a, int i, int f){
//    cout << i << ' ' << f << '\n';
    return (a[i] == a[f] && a[i + 1] == a[f - 1]) || (a[i] == a[f - 1] || a[i + 1] == a[f]);
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    string a;
    while(N--){
        cin >> a;
        bool ok = false;
        if(a.size() == 3){
            ok = a[0] == a[2];
        }
        else if(a.size() > 3){
        for(int i = 0 ; i < a.size() - 3 ; i++)
            if(pal(a, i, i + 3)){
                ok = true;
                break;
            }
        }
        if(ok) cout << "TAK\n";
        else cout << "NIE\n";
    }


    return 0;
}
