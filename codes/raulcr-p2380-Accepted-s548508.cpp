///by r@ul!

#include <iostream>

using namespace std;

typedef long long LL;

int binsum(LL a){
    int sol = 0;
    while(a > 0){ 
          if(a % 2 == 1)
             sol++;
          a /= 2;
    }
    return sol;
}

int main()
{
    int cc;
    LL dn, sum = 0;
    cin >> cc;
    while(cc > 0){
          cin >> dn; 
          sum += binsum(dn);
          cc--;
    }
    cout << sum << '\n';
    return 0;
}
