/** @file complejos.h
    @brief Librer&iacute; de funciones para aritm&eacutetica b&aacutesica con n&uacutemeros complejos
*/
#include "complejos.h"


struct numeroComplejo sumar(numeroComplejo *nc1, numeroComplejo *nc2){
    struct numeroComplejo nc3;
    nc3.real = nc1->real + nc2->real;
    nc3.imaginario = nc1->imaginario + nc2->imaginario;
    return nc3;
}
struct numeroComplejo restar(numeroComplejo *nc1, numeroComplejo *nc2){
    struct numeroComplejo nc3;
    nc3.real = nc1->real - nc2->real;
    nc3.imaginario = nc1->imaginario - nc2->imaginario;
    return nc3;
}
struct numeroComplejo multiplicar(numeroComplejo *nc1, numeroComplejo *nc2){
    struct numeroComplejo nc3;
    nc3.real = nc1->real * nc2->real;
    nc3.imaginario = nc1->imaginario * nc2->imaginario;
    return nc3;
}


void fill_complejo(struct numeroComplejo *nc){

    float real = 0, imaginario = 0;

    printf("NUMERO COMPLEJO \n");
    printf("Dame un numero real: ");
    scanf("%f", &real);
    printf("Dame un numero imaginario: ");
    scanf("%f", &imaginario);

    nc->real = real;
    nc->imaginario = imaginario;

    printf("\n");

}
