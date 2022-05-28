#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <unistd.h>
#include <sys/mman.h>

#define MAX_BUFFER         4096    /* tamanio del buffer */
int main(int argc, char *argv[]){
	int shd; 
	char *buffer;   

        printf("Comienza el proceso con pid %d\n", getpid());
	shd = open("BUFFER", O_RDONLY);
	
	printf("Antes de mmap\n");
	getchar();
	buffer = (char *) mmap(NULL, MAX_BUFFER * sizeof(char),
			PROT_READ, MAP_SHARED, shd, 0);


	printf("Despues de mmap\n");
	printf("Dir de buffer: %p\n",buffer);
	printf("buffer[0]=%c \n", buffer[0]);
	getchar();

	printf("Pulsa una tecla para volver a leer buffer[0]\n");
	getchar();
	printf("buffer[0]=%c \n", buffer[0]);

	printf("Pulsa una tecla para terminar\n");
	getchar();	
	munmap(buffer,  MAX_BUFFER * sizeof(char));
	close(shd);   
	return 0;
}
