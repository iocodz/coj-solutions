#include <bits/stdc++.h>

using namespace std;

string N, M = "error";
vector<string> v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    if(N.size() < 3 || N.size() % 2 == 0)
        cout << M;

    else{
        int in = N.size() / 2, fin = in;

        cout << N << '\n';

        for(int i = 0 ; i < N.size() ; i++){
             string vp = "";
             if(i < N.size() / 2){
                for(int j = 0 ; j < N.size() ; j++)
                    if(j >= in && j <= fin)
                        vp += ' ';
                    else
                        vp += N[j];
                in--;
                fin++;

             v.push_back(vp);
            }
//            else{
//                in++;
//                fin--;
//                for(int j = 0 ; j < N.size() ; j++)
//                    if(j >= in && j <= fin)
//                        vp += ' ';
//                    else
//                        vp += N[j];
//                v.push_back(vp);
//            }
        }

        for(int i = 0 ; i < v.size() ; i++)
            cout << v[i] << '\n';
        for(int i = v.size() - 2 ; i >= 0 ; i--)
            cout << v[i] << '\n';
        cout << N;
    }

    return 0;
}
