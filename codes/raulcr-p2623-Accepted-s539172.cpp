#include <string>
#include <iostream>

using namespace std;

int main()
{
     string a, c = "";
     cin >> a;
     long long b;
     b = a.length();
     if (b % 2 == 0){
        b /= 2;
   	    for (int i = b - 1; i >= 0; i--){
   	        c += a[i];
   	    }
   	    for (int i = a.length() - 1; i >= b; i--)
            c += a[i];
   	    cout << c << endl;
     }
     else if (b % 2 != 0){
          b = (b / 2) + 1;
   	      for (int i = b - 2; i >= 0; i--){
              c += a[i];
          }
          c += a[b - 1];
          for (int i = a.length() - 1; i > b; i--){
              c += a[i];
          }
          c += a[b];
          cout << c << endl;    
     }
     return 0;
}
