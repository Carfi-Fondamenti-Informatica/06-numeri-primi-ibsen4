#include <iostream>
#include "lib.h"
int main(){
  int n=0;
    cin>>n;
    if (numeroprimo(n)==true){
        cout<<"numero primo"<<endl;
    }
    else
        cout<<"numero non primo";
  return 0;
}
