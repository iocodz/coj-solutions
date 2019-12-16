///by r@ul!

#include <iostream>
#include <string>

using namespace std;

string name[201];
int din[201];


void camb (int & a, int & b, string & c, string & d){
     
     int e = b;
     b = a;
     a = e;
     string f = d;
     d = c;
     c = f;

}

int main (){
    
    int cn, a, b, c;
    
    while (cin >> cn && cn != -1){
          
          int m = 0;
          
          for (int i = 0 ; i < cn ; i++){
              cin >> name[i] >> a >> b >> c;
              din[i] = a * 5 + b * 10 + c * 20;
          }
          
          for (int i = 0 ; i < cn ; i++){
              for (int j = 0 ; j < cn ; j++){
                  
                  if (din[i] < din[j])
                     camb(din[i], din[j], name[i], name[j]);
                  
                  else if (din[i] == din[j])
                     m++;  
              }
          
          }
          
          if (din[0] == din[1] || din[cn - 1] == din[cn - 2]) 
             cout << "All have the same amount.\n";
          else
             cout << name[cn - 1] << " has most, " << name[0] << " has least money.\n";
    }
    
    return 0;
}
