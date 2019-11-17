#include <stdio.h>

// El tamaño de las variables estan en bytes //

int main() {
  printf( "    short int: %zd\n" , sizeof(short int) ) ;
  printf( "          int: %zd\n" , sizeof(int) ) ;
  printf( "     long int: %zd\n", sizeof(long int) ) ;
  printf( "long long int: %zd\n", sizeof(long long int) ) ;
  printf( "         char: %zd\n" , sizeof(char) ) ;
  printf( "        float: %zd\n" , sizeof(float) ) ;
  printf( "       double: %zd\n" , sizeof(double) ) ;
  printf( "       size_t: %zd\n", sizeof(size_t) ) ;
  printf( "        void*: %zd\n\n", sizeof(void *) ) ;

  return 0;
  
}
