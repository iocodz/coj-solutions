///by r@ul!

#include <string>
#include <iostream>

using namespace std;

int ca[300];

int main()
{
    int cc;
    string a;
    cin >> cc;
    while(cc > 0){
          int sol = 0;
          cin >> a;
          for(int i = 0 ; i < a.length() ; i++){
              ca[a[i]]++;
          }
          for(int i = 0 ; i < 123 ; i++){
              if(ca[i] != 0){
                ca[i] = 0;
                sol++;
              }
          }
          cout << sol << '\n';
          cc--;
    }
    return 0;
}
