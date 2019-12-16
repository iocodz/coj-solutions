#include <bits/stdc++.h>

using namespace std;

int sol, la, lb;
string a, b;

int main()
{
    cin >> a;
    la = a.size();

    while(cin >> b){
        lb = b.size();
        if(lb < la)
            continue;

        for(int j = 0 ; j < lb ; j++)
            if(b[j] == a[0] && lb - j >= la){
                bool fl = 1;
                int c = j + 1;
                for(int i = 1 ; fl && i < la && c < lb ; i++ , c++)
                    if(a[i] != b[c])
                        fl = 0;
                if(fl)
                    sol++;
            }
    }

    cout << sol;
    return 0;
}
