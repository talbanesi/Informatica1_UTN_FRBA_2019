#include <stdio.h>

int main()
{
	FILE *file = fopen("ejemplo_2.txt", "r");
	FILE *file2 = fopen("ejemplo_2_out.txt", "w");

	int x;
	/* Lee un caracter en cada pasada desde el archivo terminando
	 * cuando encuentra EOF.
	*/
	while (( x = fgetc(file)) != EOF ) {

			//printf( "%c", x );
			//fputc(x,file2);

			fprintf(file2,"%x ",(char) x); //En este caso, me imprime en otro archivo file2 los caracteres en hexadecimal, por eso es el %x
			//fprintf(file2,"%c",(char) x) //En este caso, me imprime en otro archivo file2 los caracteres originales. Es decir, basicamente me copia el texto de file en file2

		}

	fclose( file );
	fclose( file2 );
}
