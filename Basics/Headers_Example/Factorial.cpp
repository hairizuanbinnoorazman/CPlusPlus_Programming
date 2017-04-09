#include "Factorial.h"

/*
Your code goes here! See Factorial.h for your method's signature (eg, its args and return value).
*/
using namespace std;

int Factorial(int n){
    int finalValue = 0;
    for(n; n > 0; n--){
        if (finalValue == 0){
            finalValue = n;
        } else {
            finalValue = finalValue * n;
        }
    }
    return finalValue;
}
