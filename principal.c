#include "agenda.h"
main(){
   int opcion=0; int n;
    diario *inicio= NULL; 
   do{system("cls");
      menu();
      printf("\n opcion=");
      scanf("%d", &opcion);
      switch(opcion){
//    mostrar contactos
//buscar contacto por nombre.
//buscar contacto por apellidos, considerando que puede haber mas de un contacto con esos apellidos.
// buscar contacto por edad.
         case 1: inicio=(diario *)leerDatos(inicio );
                 break;
         case 2: listarContactos(inicio);
                 break;
         case 3: buscarpornombre(inicio);    
                 break;
         case 4: buscarporapellidos(inicio);
                 break;
         case 5: buscarporedad(inicio);        
                 break;  
         case 6: buscaruntelefonoydesplegar(inicio);
                 break;  
         case 7: guardarListaTexto(inicio);
                 break;                    
         case 8: inicio=leerListaTexto(inicio);
                 break;                    
         case 9: modificar(inicio);
                 break;
         case 10:  guardarListaTexto(inicio);
                 printf("\n Au revoir \n");
                 break;                                                                   
         default: printf("\n Opcion incorrecta\n");
                 break;                 
      }
      printf("\n\n");
      system("pause");                
   }while(opcion!=9);
}
