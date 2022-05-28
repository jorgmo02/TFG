#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <unistd.h>
#include <sys/mman.h>

#define MAX_BUFFER         4096    /* tamaño del buffer */

int main(int argc, char *argv[])
{
	int shd;
	char* buffer;

        printf("Comienza el proceso con pid %d\n", getpid());
	shd = open("BUFFER", O_CREAT|O_RDWR, 0700);
	ftruncate(shd, MAX_BUFFER * sizeof(int));

	printf("Antes de mmap\n");
	getchar();
	buffer = (char*) mmap(NULL, MAX_BUFFER * sizeof(char),
			PROT_WRITE, MAP_SHARED, shd, 0);

	printf("Despues de mmap\n");
	printf("Dir de buffer: %p\n",buffer);
	getchar();

	printf("Pulsa una tecla para escribir x en  buffer[0]\n");
	getchar();
	buffer[0]='x';

	printf("Pulsa una tecla para terminar\n");
	getchar();	
	munmap(buffer, MAX_BUFFER * sizeof(char));
	close(shd);
	unlink("BUFFER");
	return 0;
}
