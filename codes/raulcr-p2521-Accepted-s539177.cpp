#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    while(cin >> a >> b >> c){
              if (a == b && a != c)
                 cout << "C\n";
              else if (a == b && a == c)
                 cout << "*\n";
              else if (a == c && c != b)
                 cout << "B\n";
              else if (b == c && b != a)
                 cout << "A\n";
    
    }
    return 0;
}
