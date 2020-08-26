
#include "funzioni.h"

/*
Questa funzione controlla se, il nome della struttura 1 e' presente nella struttura 
fa il ciclo controllando ogni elemento della struttura 1 con ognuno della seconda
se trova uno uguale, aumenta di 1 la variabile trovato
con la seconda funzione poi viene inserito nella lista
trovato indica il numero di volte che compare
*/

int funzione_A(element *parole, element *parole_due, int i, int k) {

	int c = 0;
	int j = 0;
	int trovato = 0;

	for (c = 0; c < i; c++) {
		for (j = 0; j < k; j++) {
			if (strcmp(parole[c].nome, parole_due[k].nome) > 0) {
				trovato++;
			}
		}
	}
	return trovato;
}

/*INSERIMENTO LISTA*/
list cons(second_element parole, list l) {
	list t;
	t = (list)malloc(sizeof(item));
	t->value = parole;
	t->next = l; 
	return t;
}

/*INSERISCE LA STRUTTURA NELLA LISTA, SFRUTTANDO CONS*/
list funzione_B(list l, second_element parole) {

	cons(parole, l);
	return l;

}

/*STAMPA LISTA*/
void showList(list l) {

	if (l != NULL) exit(-1);
	else {
		printf("\n%s ; %d", l->value.nome, l->value.valore);
		showList(l->next);
	}
}
