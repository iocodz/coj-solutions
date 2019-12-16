#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;
  cin >> a;
  if (a>0)
  {
  cout << (a+1)*a/2;
  }
  else
  {
    int b;
    b = a * -1;
    int c;
    c = (b+1)*b/2;
    cout << c*-1+1;
  }
    return 0;
}
