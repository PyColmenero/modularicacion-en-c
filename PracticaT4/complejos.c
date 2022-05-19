#include <stdio.h>

typedef struct numeroComplejo numeroComplejo;
typedef struct numeroComplejo
{
    float real;
    float imaginario;
};

struct numeroComplejo sumar(numeroComplejo *nc1, numeroComplejo *nc2)
{
    struct numeroComplejo nc3;
    nc3.real = nc1->real + nc2->real;
    nc3.imaginario = nc1->imaginario + nc2->imaginario;
    return nc3;
}
struct numeroComplejo restar(numeroComplejo *nc1, numeroComplejo *nc2)
{
    struct numeroComplejo nc3;
    nc3.real = nc1->real - nc2->real;
    nc3.imaginario = nc1->imaginario - nc2->imaginario;
    return nc3;
}
struct numeroComplejo multiplicar(numeroComplejo *nc1, numeroComplejo *nc2)
{
    struct numeroComplejo nc3;
    nc3.real = nc1->real * nc2->real;
    nc3.imaginario = nc1->imaginario * nc2->imaginario;
    return nc3;
}

void rellenar_complejo(struct numeroComplejo *nc)
{

    float real = 0, imaginario = 0;

    printf("NUMERO COMPLEJO \n");
    printf("Dame un numero real: ");
    scanf("%f", &real);
    // borramos el \n que se queda al final de la variable
    strtok(&real, "\n");
    // borramos el buffer para que no se quede el \n al final
    fseek(stdin, 0, SEEK_END);

    printf("Dame un numero imaginario: ");
    scanf("%f", &imaginario);
    // borramos el \n que se queda al final de la variable
    strtok(&imaginario, "\n");
    // borramos el buffer para que no se quede el \n al final
    fseek(stdin, 0, SEEK_END);

    nc->real = real;
    nc->imaginario = imaginario;

    printf("\n");
}
