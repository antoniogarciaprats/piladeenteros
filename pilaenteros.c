
#include <stdlib.h>
#include <stdio.h>
#include "pilaenteros.h"

struct p_enteros_ele {
	struct p_enteros_typo val;
	struct p_enteros_ele *sig;
}


void p_enteros_mete ( p_enteros *p, struct p_enteros_ele e ) {
	
	p_enteros nuevo;
	
	nuevo = ( struct p_enteros_ele ) malloc ( sizeof ( struct p_enteros_ele ));
	if (!nuevo ) {
		fprintf ( stderr, "p_enteros_mete: No hay memoria suficiente. \n" );
		exit (1);
	}
	
	nuevo->val = e;
	nuevo->sig = *p;
	*p = nuevo;

}

void p_enteros_saca ( p_enteros *p, struct p_enteros_ele *e ) {

		p_enteros viejo;
		
		if ( p_enteros_vacia ( *p ) {
			fprintf (stderr, "Error saca: "La pila de enteros está vacía.\n");
			exit(1);
		}
		
		viejo = *p;
		*e = viejo->val;
		*p = viejo->sig;
		
		free ( viejo );
	
}

p_enteros pila_int_copiar ( p_enteros p ) {
	
	p_enteros b, corr, nuevo;
	
	b = NULL;
	
	if ( p ) {
		nuevo = ( struct p_enteros_ele* ) malloc ( struct p_enteros_ele ));
		if ( !nuevo ) {
			fprintf ( stderr, "p_enteros_copiar: No hay memoria suficiente.\n" );
			exit (1);
		}
		
		nuevo->val = p->val;
		b = corr = nuevo;
		p = p->sig;
		
		while (p) {
			nuevo = ( struct p_enteros_ele* ) malloc ( struct p_enteros_ele )); 
			if ( !nuevo ) {
				fprintf ( stderr, "p_enteros_copiar: No hay memoria suficiente.\n" );
				exit (1);
			}
		
			nuevo->val = p->val;
			corr = corr->sig = nuevo;
			p = p->sig;
		}
		
		corr->sig = NULL;
		
	}
	
	return (b);
	
}
