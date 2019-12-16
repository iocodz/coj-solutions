#include <bits/stdc++.h>

using namespace std;

int N;

void perfect(int k){
    vector<int> div;
    int sum = 0;
    for(int i = 1 ; i <= k / 2 ; i++)
        if(k % i == 0){
            div.push_back(i);
            sum += i;
        }

    if(k == sum){
        cout << k << " = " << div[0];
        for(int i = 1 ; i < div.size() ; i++)
            cout << " + " << div[i];
        cout << '\n';
    }

    else
        cout << k << " is NOT perfect.\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(cin >> N && N > -1)
        perfect(N);



    return 0;
}
