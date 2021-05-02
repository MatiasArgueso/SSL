/* TablaDeConversion.c
    C11
    Matias Argüeso
    2021
*/

#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

int main(void){

assert( Celsius(0)   <  -17.7 && Celsius(0)   > -17.8);

assert(Fahrenheit(-17) < 1.41 && Fahrenheit(-17) > 1.39);

return 0;

}