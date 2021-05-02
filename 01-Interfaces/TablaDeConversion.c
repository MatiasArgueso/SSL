/* TablaDeConversion.c
    C11
    Matias Argüeso
    2021
*/

#include <stdio.h>
#include "Conversion.h"

int main (void){
    
    const int limiteInferiorFahr = 0;
    const int limiteSuperiorFahr = 300;
    const int incrementoFahr  = 20;
    const int limiteInferiorCelsius = -17;
    const int limiteSuperiorCelsius = 104;
    const int incrementoCelsius  = 11;

    //Convertir de Fahr a Celsius
    printf("Fahr | Celsius\n");
    for (int fahr = limiteInferiorFahr; fahr <= limiteSuperiorFahr; fahr = fahr + incrementoFahr)
        printf("%3d  %6.1f \n", fahr, Celsius(fahr) );   
      
    printf("\n");

    //Convertir de Celsius a Fahr
     printf("Celsius|Fahr\n");
    for (int celsius = limiteInferiorCelsius; celsius <= limiteSuperiorCelsius; celsius = celsius + incrementoCelsius)
        printf("%3d %6.1f\n", celsius, Fahrenheit(celsius) );

	return 0;
}