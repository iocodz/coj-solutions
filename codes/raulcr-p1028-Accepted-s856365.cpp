#include <bits/stdc++.h>

using namespace std;

string a, b;

int main()
{
    while(cin >> a >> b){
        int j = 0;

        for(int i = 0; i < a.size(); i++){
            bool c = 0;
            for(;j < b.size(); j++){
                if(a[i] == b[j]){
                    c = true;
                    j++;
                    break;
                }
            }

            if(!c){
                cout << "No\n";
                goto Aasd;
            }
        }

        cout << "Yes\n";

        Aasd:
        j = j;
    }

    return 0;
}
