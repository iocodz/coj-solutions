#include <bits/stdc++.h>

using namespace std;

int main()
{  // freopen(".tu","r",stdin);
    int num;
     cin>>num;
    string a;
    int suma;
    for (int i = 1 ;i <= num ;i++){
    suma = 0;
    cin>>a;
    int b = a[a.size() - 1] - '0';
     if (b % 2 == 0){
      int lon = a.size();
        for (int i = 1 ;i <= lon ;i++)
         suma += (a[a.size() - i] - '0');

        if ( suma % 3 == 0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
     }
     else cout<<"NO"<<endl;

    }

    return 0;
}