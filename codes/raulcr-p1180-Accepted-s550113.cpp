///by r@ul!

#include <iostream>

using namespace std;

int sol[5];

void anvalues(){
    sol[0] = 1;
    sol[1] = 1;
    sol[2] = 2;
    sol[3] = 2;
    sol[4] = 2;
    sol[5] = 8;
}

int main()
{
    anvalues();
    int cc;
    cin >> cc;
    while(cc > 0){
          for(int i = 0 ; i < 6 ; i++){
              int pieces[5];
              cin >> pieces[i];
	      if(i == 5)	
                  cout << sol[i] - pieces[i];
	      else
		  cout << sol[i] - pieces[i] << " ";	   
          }
          cout << '\n';
          cc--;   
    }
    return 0;
}
