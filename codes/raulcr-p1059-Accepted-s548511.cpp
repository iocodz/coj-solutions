///by r@ul!

#include <iostream>

using namespace std;

string bin(long long a){
    string soll = "", sol = "";
    while(a > 0){ 
          if(a % 2 == 0)
               sol += "0";
          else 
               sol += "1";
          a /= 2;
    }
    for(int  i = sol.length() - 1 ; i >= 0 ; i--)
          soll += sol[i];
    return soll;
}

int parity(string c){
    int sol = 0;
    for(int i = 0 ; i < c.length() ; i++){
          if(c[i] == '1')
             sol++;
    }
    return sol;
}

int main()
{
    long long a;
    while(cin >> a && a != 0){
          string c = bin(a);
          cout << "The parity of " << c << " is " << parity(c) << " (mod 2).\n";
    }
    return 0;
}
