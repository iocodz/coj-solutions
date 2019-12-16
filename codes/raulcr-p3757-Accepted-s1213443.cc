    #include <bits/stdc++.h>

    using namespace std;

    int T, N;

    int main()
    {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        cin >> T;
        while(T--){
            cin >> N;
            int p, im;
            p = im = 0;
            for(int i = 1 ; i * i <= N ; i++){
                if(N % i == 0){
                    if(i & 1)im++;
                    else p++;
                }
                if(N % (N / i) == 0 && N / i != i){
                    if((N / i) & 1)im++;
                    else p++;
                }
            }

            cout << "P: " << p << " I: " << im << '\n';
        }
        return 0;
    }
