#include <stdio.h>
#include "../src/carrito.h"
#include "minunit/minunit.h"

/*
 * Tests de integracion: verifican que las funciones trabajan bien
 * en combinacion, no de forma aislada.
 */

/* ═══════════════════════════════════════════════════════════════════════════
 *  PARTE D — Escribir el test guiado (ver README.md, Parte 8)
 * ═══════════════════════════════════════════════════════════════════════════ */

/* TODO: escribir test_compra_con_descuento() siguiendo la guia del .md */
void test_compra_con_descuento(void){
    Carrito c;
    carrito_init(&c);
    Producto p={"Pan",200,3};
    carrito_agregar(&c,p);
    Producto p1={"Leche",350,2};
    carrito_agregar(&c,p1);
    ASSERT_IGUAL(1300, carrito_total(&c));
    ASSERT_IGUAL(1170, carrito_descuento(1300,10));
}
/* ═══════════════════════════════════════════════════════════════════════════
 *  PARTE E — Disenar un test propio (ver README.md, Parte 9)
 * ═══════════════════════════════════════════════════════════════════════════ */

/* TODO: escribir test_agregar_hasta_llenar() */

int main(void) {
    printf("=== Tests de integracion ===\n");
    /* Descomentar a medida que agregues las funciones: */
    test_compra_con_descuento();  
    /* test_agregar_hasta_llenar();  */
    RESUMEN();
    return EXIT_CODE();
}
