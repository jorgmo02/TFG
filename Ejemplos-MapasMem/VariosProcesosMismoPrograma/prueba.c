#include <pthread.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int varGlobal = 3;
int *p;

int main() {
	char *p2;
	int local = 7;
	int i = 0;
	printf("Comienza el proceso con pid %d\n", getpid());
  	printf("Antes de malloc de  10....\n");	
	getchar();
	p = (int*) malloc(10*sizeof(int));
	p[0] = 1;
	p[1] = 2;
	printf("Direcciones: varGlobal %p   local %p   p %p &p: %p  main: %p \n", &varGlobal, &local, p,  &p, main);
	getchar();

	while (1) {
		varGlobal++;
		p[0]++;	
		printf("varGlobal=%d p[0]=%d\n", varGlobal,p[0]);
		getchar();
	}

	exit(0);
}
