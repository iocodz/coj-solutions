///by r@ul!

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int cc, a;
    cin >> cc;
    while(cc > 0){
          cin >> a;
          a = (a + 3) * 2;
          a = (a + 3) * 2;
          a = (a + 3) * 2;
          cout << a << '\n'; 
          cc--;  
    }
    return 0;
}