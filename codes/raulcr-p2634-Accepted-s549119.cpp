///by r@ul!

#include <string>
#include <iostream>

using namespace std;

int meses[12];

int mount(string a){
    int sol = 0;
    for(int i = 0 ; i < a.length() ; i++){
        if(a[i] == '/' && a[i + 2] == '/'){
           sol = a[i + 1] - 48;
           break;
        }
        else if(a[i] == '/' && a[i + 3] == '/'){
           sol = ((a[i + 1] - 48) * 10) + a[i + 2] - 48;
           break;
        }
           
    }
    return sol;
}

int main()
{
    int cc;
    string a, b;
    cin >> cc;
    while(cc > 0){
          cin >> b >> a;
          meses[mount(a)]++;
          cc--;
    }
    for(int i = 1 ; i <= 12 ; i++){
        cout << i << " " << meses[i] << '\n';    
    }
    return 0;
}
