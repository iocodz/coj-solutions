#include <iostream>
#include <string>

using namespace std;

int main(){
	int k = 0;
	int b;
	string a;
	while (cin >> a >> b){
		if (a == "suma")
			k += b;
		else
			k -= b;
	}
	cout << "resultado: " << k;
}