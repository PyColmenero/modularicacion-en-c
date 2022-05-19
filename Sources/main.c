/** @file main.c
    @brief Programa princial
*/
#include <stdio.h>
#include "complejos.h"


/** @fn int main()
  * @brief Programa principal, pide los datos de 2 numeros complejos y los suma, resta y multiplica.
  * Declaramos los 3 numeros complejos
  * Usamos las funciones suma(), resta(), multiplicacion()
*/

/** @var struct numeroComplejo nc1, nc2, nc3;
    @brief numeros complejos con los que operamos

*/
int main()
{
    struct numeroComplejo nc1, nc2, nc3;

    fill_complejo(&nc1);
    fill_complejo(&nc2);

    nc3 = sumar(&nc1, &nc2);
    printf("Suma: %f, %f\n", nc3.real, nc3.imaginario );

    nc3 = restar(&nc1, &nc2);
    printf("Resta: %f, %f\n", nc3.real, nc3.imaginario );

    nc3 = multiplicar(&nc1, &nc2);
    printf("Multiplicacion: %f, %f\n", nc3.real, nc3.imaginario );

    return 0;
}
