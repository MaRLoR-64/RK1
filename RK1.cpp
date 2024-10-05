#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
  int n = 6;
  double summ = 0;
  double f = 0;;
  for (int i = 1; i < n + 1; i++) {
    f = (i*i + i);
    cout<< i << " слагаемое " <<  1/f  << "\n";
    
  }
  for (int i = 1; i < n + 1; i++){
    f = (i*i + i);
    summ +=  1 / f;
  }
  cout<<"Сумма ряда " << summ << endl;
  
  return 0;
}
