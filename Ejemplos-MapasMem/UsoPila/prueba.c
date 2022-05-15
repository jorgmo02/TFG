#include <pthread.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int global =0;
int *p;
int totRec = 999999;
int foo() {
	char buf[4096];
	buf[4095] = 'a';
	printf("Llamada %d. buf en %p\n", global++, buf);
	getchar();
	if (--totRec > 0)
		return foo();
	else
		return buf[4095];

}


int main() {
	char *p2;
	int local = 7;
	int i = 0;
	printf("Comienza el proceso con pid %d\n", getpid());
	
	printf("Direcciones: global %p   local %p   p %p &p: %p  main: %p \n", &global, &local, p,  &p, main);
	printf("Llamando a foo\n");
	getchar();
	foo();


	exit(0);
}
