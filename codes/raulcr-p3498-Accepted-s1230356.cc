#include <bits/stdc++.h>

using namespace std;

int N, T;

int main()
{
    cin >> T;
    for(int t = 1 ; t <= T ; t++){
        cin >> N;
        vector<int> a, b;
        int sol = 0;
        for(int i = 1 ; i <= N ; i++){
            int c; cin >> c;
            a.push_back(c);
        }

        while(a.size()){
            int ant = a[0];
            for(int i = 1 ; i < a.size() ; i++){
                if(a[i] >= ant) ant = a[i];
                else b.push_back(a[i]);
            }
            a.clear();
            for(int i = 0 ; i < b.size() ; i++)
                a.push_back(b[i]);
            b.clear();
            sol++;
        }

        cout << "Case #" << t << ": " << sol << '\n';
    }
    return 0;
}
