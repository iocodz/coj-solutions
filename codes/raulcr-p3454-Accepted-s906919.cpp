#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    while(N--){
        string a; cin >> a;

        int sol = 0;
        for(int i = 0 ; i < a.size() ; i++)
            if(a[i] == 'C')
                for(int j = i + 1 ; j < a.size() ; j++)
                    if(a[j] == 'A')
                        for(int k = j + 1 ; k < a.size() ; k++)
                            if(a[k] == 'T')
                                sol++;
        cout << sol << '\n';
    }

    return 0;
}
