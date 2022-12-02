#include "PrimaLibreria.h"
bool numeroprimo(int num) {
    int divisore = 2;
    while (divisore < num) {
        if (num%divisore==0) {
            return false;
        }
        divisore++;
    }
    return true;
}
