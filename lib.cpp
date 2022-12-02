#include "lib.h"
bool numeroprimo(int num) {
    int divisore = 1, conta=0;
    while (conta<=1 && divisore<=num/2) {
        if (num%divisore==0) {
            conta++;
        }
       divisore++;
    }
    if (conta==1){
    return true;
}
    else 
        return false;
}
