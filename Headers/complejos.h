/** @fn struct numeroComplejo sumar(numeroComplejo *nc1, numeroComplejo *nc2)
    @brief suma dos n&uacute;meros complejos

    @param *nc1 Primer n&uacute;mero complejo
    @param *nc1 Segundo n&uacute;mero complejo
*/
/** @fn struct numeroComplejo restar(numeroComplejo *nc1, numeroComplejo *nc2)
    @brief resta dos n&uacute;meros complejos

    @param *nc1 Primer n&uacute;mero complejo
    @param *nc1 Segundo n&uacute;mero complejo
*/
/** @fn struct numeroComplejo multiplicar(numeroComplejo *nc1, numeroComplejo *nc2)
    @brief multiplica dos n&uacute;meros complejos

    @param *nc1 Primer n&uacute;mero complejo
    @param *nc1 Segundo n&uacute;mero complejo
*/
/** @fn void fill_complejo(struct numeroComplejo *nc)
    @brief Pide por pantalla el numero real e imaginario.

    @param *nc1 N&uacute;mero complejo que rellenar
*/

typedef struct numeroComplejo numeroComplejo;
typedef struct numeroComplejo{
    float real;
    float imaginario;
};

void fill_complejo(numeroComplejo *nc);
struct numeroComplejo sumar(numeroComplejo *nc1, numeroComplejo *nc2);
struct numeroComplejo restar(numeroComplejo *nc1, numeroComplejo *nc2);
struct numeroComplejo multiplicar(numeroComplejo *nc1, numeroComplejo *nc2);


