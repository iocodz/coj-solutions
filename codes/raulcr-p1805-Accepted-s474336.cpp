#include <iostream>
using namespace std;

int main()
{
    long long A , B , R;
    cin >> A >> B;
    R= (A + B) + (A-B) + (B + A) + (B-A);
    if (1 <= A && B <= 10 ^ 9){
        cout << R ;
    }
    return 0;
}
