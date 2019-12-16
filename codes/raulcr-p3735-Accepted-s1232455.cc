#include <bits/stdc++.h>

using namespace std;

int f[30], q[30];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        int N;
        string a;
        cin >> N >> a;

        for(int i = 0 ; i < N ; i++)
            f[a[i] - 'A']++;

        for(int i = 0 ; i < 30 ; i++){
            if(f[i] && f[i] % 2 == 0){
                q[i] = f[i];
                f[i] = 0;
            }
            else if(f[i] && f[i] - 1 > 0){
                q[i] = f[i] - 1;
                f[i] = 1;
            }
        }
        int imp = -1;
        for(int i = 0 ; i < 30 ; i++){
            if(f[i]){
                imp = i;
                break;
            }
        }

        for(int i = 0 ; i < 30 ; i++){
            if(q[i]){
                for(int j = 0 ; j < q[i] / 2 ; j++)
                    cout << char(i + 'A');
            }
        }

        if(imp != -1) cout << char(imp + 'A');

        for(int i = 29 ; i >= 0 ; i--)
            if(q[i]){
                for(int j = 0 ; j < q[i] / 2 ; j++)
                    cout << char(i + 'A');
            }

        cout << '\n';

        fill(q, q + 30, 0);
        fill(f, f + 30, 0);
    }
	return 0;
}

