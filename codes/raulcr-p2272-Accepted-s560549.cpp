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
	while (a >= b * b){
	    if (a % b == 0)
	        return 0;
	    b+=2;
	}
	
    return true;
}
long long nextprime(long long a){
    //a++;
    while (!prime(a)){
        a++;
    }
    return a;
}
int main()
{
    int a;
    long long b;
    cin >> a;
    while (a > 0){
        cin >> b;
        cout << nextprime(b) << endl;
        a--;
    }
    return 0;
}
