///by taskkill
#include <bits/stdc++.h>

using namespace std;

int T;
int A, B;
string C;
int K[1001];

int main()
{
    cin >> T;

    while(T--){
        cin >> A >> B >> C;

        for(int i = 1 ; i <= A ; i++)
            cin >> K[i];

        sort(K + 1, K + 1 + A);

        int sol = 0;

        if(C == "irregular")
            for(int i = 1 ; i <= B ; i++)
                sol += K[i];

        else
            for(int i = A ; i >= A - B + 1 ; i--)
                sol += K[i];

        cout << sol << '\n';
    }
    return 0;
}
