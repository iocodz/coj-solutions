#include <bits/stdc++.h>

using namespace std;

int N, c0[101];
string a[101];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> a[i];
        sort(a[i].begin(), a[i].end());
        for(int j = 0 ; j < a[i].size() ; ){
            if(a[i][j] != '0' && j == 0)
                break;
            if(a[i][j] == '0')
                j++;
            else{
                a[i][0] = a[i][j];
                a[i][j] = '0';
                break;
            }
        }

        if(a[i][0] == '-')
            reverse(a[i].begin() + 1, a[i].end());


        cout << a[i] << '\n';
    }


    return 0;
}
