#include <stdio.h>

int main()
{
	FILE *file = fopen("ejemplo_1.txt", "r");

	int x;

	/* Lee un caracter en cada pasada desde el archivo terminando
	 * cuando encuentra EOF.
	*/

    printf("\n\n");

	while (( x = fgetc(file)) != EOF ) {
			printf( "%c", x );
		}

    printf("\n\n");

	fclose( file );

}
