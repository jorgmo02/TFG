#include <pthread.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int global = 3;
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
	printf("Direcciones: global %p   local %p   p %p &p: %p  main: %p \n", &global, &local, p,  &p, main);
	getchar();

	while (1) {
		
		printf("Malloc de 4096 bytes i=%d\n",i++);
		p2 = (char*) malloc(4096*sizeof(char));
		printf("Dirección de p2: %p\n", p2);
		getchar();
	}

	exit(0);
}
