///by r@ul!

#include <iostream>
#include <string>

using namespace std;

bool sol(int a, int b, int c){
     double disc;
     disc = (b*b) - 4 * (a * c);
     if(disc >= 0)
        return 1;
     return 0;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(sol(a, b, c))
       cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
