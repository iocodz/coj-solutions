///by r@ul!

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;    
    for(int i = 'a' ; i <= 'z' ; i++){
        for(int j = 0 ; j < a.length() ; j++)
            if(i == a[j])
               cout << a[j];        
    }
    cout << '\n';
    return 0;
}
