#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int K, sol = 0, kk;
		cin >> K;
		for (int i = 1 ; i <= K ; i++){
			cin >> kk;
			if(kk != i)
				sol++;
		}
		cout << sol << '\n';
	}
	return 0;
}
