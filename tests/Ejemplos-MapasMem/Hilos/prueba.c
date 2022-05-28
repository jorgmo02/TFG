#include <pthread.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int global = 3;
int *p;

void * func(void * arg) {
 int a_hilo = 7;
 int i =0;
 char* ph;
  printf("Dirección de variable pila hilo: %p \n",&a_hilo);
  while (1) {
	getchar();
	printf("Malloc de hilo nuevo  4096 bytes i=%d\n",i++);
	ph = (char*) malloc(4096*sizeof(char));
	printf("Dirección de ph (hilo nuevo): %p\n", ph);
  }

}

int main() {
	pthread_t th1;
	char *p2;
	int local = 7;
	printf("Comienza el proceso con pid %d\n", getpid());
  	printf("Antes de malloc 10....\n");	
	getchar();
	p = (int*) malloc(10*sizeof(int));
	p[0] = 1;
	p[1] = 2;
	printf("Direcciones: global %p   local %p   p %p &p: %p  main: %p \n", &global, &local, p,  &p, main);
	printf("Pulsa una tecla para crear hilo\n");
	getchar();


	pthread_create(&th1, NULL, func,NULL);
	printf("Hilo creado\n");
	getchar();

	printf("Malloc en hilo original de  4096 bytes \n");
	p2 = (char*) malloc(4096*sizeof(char));
	printf("Dirección de p2: %p\n", p2);

	getchar();
	printf("Malloc en hilo original de  40*4096 bytes \n");
	p2 = (char*) malloc(40*4096*sizeof(char));
	printf("Dirección de p2: %p\n", p2);
	pthread_join(th1, NULL);

	exit(0);
}
