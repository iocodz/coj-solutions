///by r@ul!

#include <iostream>
#include <string>

using namespace std;

int AEB[91];
int BEA[91];

int main()
{
    string a, b;
    string aeb = "", bea = "", in = "";
    cin >> a >> b;
    for(int i = 0 ; i < a.length() ; i++)
        AEB[a[i]]++;
    for(int i = 0 ; i < b.length() ; i++)
        BEA[b[i]]++;
    for(int i = 0 ; i < 91 ; i++){
        if(AEB[i] > 0 && BEA[i] == 0)
            aeb = aeb + (char)i;
        if(BEA[i] > 0 && AEB[i] == 0)
            bea = bea + (char)i;
        if(AEB[i] > 0 && BEA[i] > 0)
            in = in + (char)i;
    }
    cout << "First:" << aeb << '\n';
    cout << "Second:" << bea << '\n';
    cout << "First&Second:" << in << '\n';
    return 0;
}
