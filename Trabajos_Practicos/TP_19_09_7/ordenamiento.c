//Metodo de ordenamiento de burbujeo

int ordenar(equipos_t *buf, int cant){

  int i,j;
  equipos_t aux;

  for(i=0;i<cabt-1;i++){

      for(j=0;j<cant-1;j++){

          if(buf[j].puntos > buf[j+1].puntos){

              aux = buf[i];
              buf[j] = buf[j+1];
              buf[j+1]=aux;

          }

      }


  }




}
