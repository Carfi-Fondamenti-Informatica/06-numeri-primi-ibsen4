#include <iostream>
#include "lib.h"
using namespace std;
int main(){
  int a;
  bool b;
    cin>>a;
  b=numeroprimo(a);
    if (b==true){
        cout<<"numero primo"<<endl;
    }
    else if (b==false)
        cout<<"numero non primo";
  return 0;
}
