#ifndef PILA_int
#define PILA_int
 
struct pila_int_typo {
    int x;
};
 
typedef struct pila_int_ele *pila_int;
 
pila_int pila_int_nuevo ( );
int pila_int_vacia ( pila_int p );
void pila_int_insertar ( pila_int *p, struct pila_int_typo e );
void pila_int_sacar ( pila_int *p, struct pila_int_typo *e );
void pila_int_destruir ( pila_int *p );
pila_int pila_int_copiar ( pila_int p );
 
#endif
