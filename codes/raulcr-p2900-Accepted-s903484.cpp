#include <bits/stdc++.h>

using namespace std;

string a, sol(50, 'z');


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("LEKTIRA.in", "r", stdin);
//    freopen("LEKTIRA.out", "w", stdout);

    cin >> a;

    sol = a;

//    if(a.size() <= 31){
//        for(int msk = 1 ; msk < (1 << a.size()) ; msk++){
//            if(__builtin_popcount(msk) != 2)
//                continue;
//
//            int f = 0, l = 0;
//
//            for(int j = 0 ; j < a.size() ; j++){
//                if((msk & j) && !f)
//                    f = j + 1;
//                else if((msk & j) && !l)
//                    l = j + 1;
//                if(f && l)
//                    break;
//            }
//
//            if(f == 1 || l == a.size())
//                continue;
//
//            if(f == 3 && l == 6)
//                cout << 1;
//
//            string d = "", b = "", c = "";
//
//            for(int i = f - 1 ; i >= 0 ; i--) d = d + a[i];
//            for(int i = l - 1 ; i >= f ; i--) b = b + a[i];
//            for(int i = a.size() - 1 ; i >= l ; i--) c = c + a[i];
//
//            string en = d + b + c;
//
//            for(int i = 0 ; i < sol.size() ; i++)
//                if(sol[i] > en[i]){
//                    sol = en;
//                    break;
//                }
//        }
//    }

    for(int i = 1 ; i < a.size() - 2 ; i++){
        for(int j = i + 2 ; j < a.size() ; j++){
            string b, c, d, k;
            b = c = d = k = "";

            for(int ii = i - 1 ; ii >= 0 ; ii--) d = d + a[ii];
            for(int ii = j - 1 ; ii >= i ; ii--) b = b + a[ii];
            for(int ii = a.size() - 1 ; ii >= j ; ii--) c = c + a[ii];

            k = d + b + c;

            if(k < sol)
                sol = k;
        }
    }


    cout << sol;

    return 0;
}

