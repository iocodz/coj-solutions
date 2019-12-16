#include <iostream>

using namespace std;

bool prime(long long a){
    if (a < 2)
        return 0;
    if (a == 2)
        return 1;
    if (a % 2 == 0)
    	return 0;    	
	
	long long b = 3;
	
	while (b * b <= a){
	
	    if (a % b == 0)
	        return 0;
	
	    b+=2;
	}
	
    return true;
}
long long nextprime(long long a){
    while (!prime(a)){
        a++;
    }
    return a;
}
int main()
{
    int a;
    cin >> a;
    
    long long b;
    
    while (a--){
        cin >> b;
        cout << nextprime(b) << '\n';
    }
    return 0;
}
