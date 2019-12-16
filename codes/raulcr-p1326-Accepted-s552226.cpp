///by r@ul!

#include <string>
#include <iostream>

using namespace std;

int main()
{
    int cc, si, ct, trans;
    string ac;
    cin >> cc;
    while(cc > 0){
        cin >> si >> ct;
        while(ct > 0){
            cin >> ac >> trans;
            if(ac == "C")
                si += trans;
            else
                si -= trans;
            ct--;
        }
        cout << si << '\n';
        cc--;
    }
    return 0;
}
