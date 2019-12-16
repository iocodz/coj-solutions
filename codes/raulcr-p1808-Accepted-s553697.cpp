///by r@ul!

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    while(cin >> a && a != "X" && cin >> b){
        int sol = 0;
        for(int i = 0 ; i < a.length() ; i++){
            if(a[i] != b[i])
                sol++;
        }
        cout << "Hamming distance is " << sol << "." << endl;
    }
    return 0;
}
