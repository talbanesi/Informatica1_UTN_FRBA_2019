/* Programa de prueba para nuestra librerÃ­a holalib
 * Usando bibliotecas de carga dinÃ¡mica
 */

# include "holalib.h"
# include <dlfcn.h>
# include <stdlib.h>

int main(int argc, char **argv)
{
	void *handle;
	void (*hello) (void);
	char *error;

	/*
	 * Se abre la librerÃ­a y se obtiene en handle un puntero a la
	 * instancia de la misma
	 */
	handle = dlopen("libhola.so.1",RTLD_LAZY);

	/*
	 * Si handle es NULL, entonces se imprime el mensaje devuelto por
	 * dlerror en stderr
	 */
	if (!handle) {
		fprintf (stderr, "%s\n", dlerror());
		exit(EXIT_FAILURE);
	}

	/*
	 * En hello se guarda el puntero al label llamado hola en la
	 * librerÃ­a.
	 */
	hello = dlsym (handle, "hola");
	if ((error = dlerror()) != NULL) {
		fputs(error, stderr);
		exit(EXIT_FAILURE);
		}

	/*
	 * Se invoca la funciÃ³n por medio de su puntero. AquÃ­ es donde
	 * aparece el mensaje caracterÃ­stico de nuestra librerÃ­a.
	 */
	(*hello) ();

	dlclose(handle);
	return 0;
}
