///by r@ul!

#include <string>
#include <iostream>

using namespace std;

int main()
{
    int cc;
    string a;
    cin >> cc;
    while(cc > 0){
          int cmi = 0, cma = 0;
          cin >> a;
          for(int i = 0 ; i < a.length() ; i++){
              if(a[i] >= 'a' && a[i] <= 'z')
                 cmi++;
              else
                 cma++;
          }
          if(cmi == cma)
              cout << "SI\n";
          else
              cout << "NO\n";
          cc--;
    }
    return 0;
}
