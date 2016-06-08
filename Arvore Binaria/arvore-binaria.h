#include <stdio.h> 

typedef struct no{
	struct ArvoreBinaria *right;
	struct ArvoreBinaria *left;
	char valor;
}no;

typedef struct Arvore{
	struct no *begin;
	struct no *fim;
	int numberOfElements;

}Arvore;