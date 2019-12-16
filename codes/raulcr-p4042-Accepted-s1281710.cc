#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	while(N--){
		int ok = 0, a, b, c;
		for(int i = 1 ; i <= 5 ; i++){
			cin >> a >> b >> c;
			if(a + b == c) ok++;
			else if(a - b == c) ok++;
			else if(a * b == c) ok++;
			else if(b && a % b == 0 && a / b == c) ok++;
		}
		cout << ok << '\n';
	}
    return 0;
}
