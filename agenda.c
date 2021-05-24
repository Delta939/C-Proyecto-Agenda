#include "agenda.h"
void menu(){
      printf("\n MENU PRINCIPAL."); 
      printf("\n 1. Leer datos.");      
      printf("\n 2. Mostrar todos los contactos");  
      printf("\n 3. Buscar una persona por nombre");
      printf("\n 4. Buscar una persona por apellidos");       
      printf("\n 5. Buscar una persona por edad");
      printf("\n 6. Buscar una persona por telefono");
      printf("\n 7. Almacenar en disco y en texto");
      printf("\n 8. Leer de disco y en texto");
      printf("\n 9. Modificar datos ");
      printf("\n 10. Salir."); 
}

diario* leerDatos(diario *inicio){
diario *nuevo;
diario *nodoSiguiente;
nuevo=(diario *)malloc(sizeof(diario));
printf("\n    Nombre=");scanf(" %[^\n]",nuevo->nombre);
printf("\n    Matricula=");scanf(" %[^\n]",nuevo->matricula);
printf("\n    Apellidos=");scanf(" %[^\n]",nuevo->apellidos);
printf("\n    email=");scanf(" %[^\n]",nuevo->email);
printf("\n    telefono=");scanf(" %[^\n]",nuevo->telefono);                  
printf("\n    domicilio=");scanf(" %[^\n]",nuevo->domicilio);
printf("\n    Edad=");scanf(" %d",&nuevo->edad);             
printf("\n    peso=");scanf("%lf", &nuevo->peso);printf("\n    estatura=");scanf("%lf", &nuevo->estatura); 
printf("\n    tipo de sangre=");scanf(" %[^\n]",nuevo->tipodesangre);
printf("\n    estado civil=");scanf(" %[^\n]",nuevo->estadocivil); 
printf("\n    sexo=");scanf(" %[^\n]",nuevo->sexo); 
      nuevo->sig=NULL;
      if (inicio== NULL){
       inicio= nuevo;
   }else{ nodoSiguiente=inicio;
   while(nodoSiguiente->sig != NULL ){
         nodoSiguiente=nodoSiguiente->sig;                      
    }
      nodoSiguiente->sig=nuevo; 
   }   return inicio;
}


void listarContactos(diario *inicio){
diario *ultimo; int i;
     if(inicio == NULL) 
printf("\nNO HAY LISTA\n");
else{ultimo=inicio; 
//printf("\nLISTA");
     printf("\n  Nombre ");    
   do{
      printf("\n  %s", ultimo->nombre);;            
    ultimo=ultimo->sig;i++;
    }while(ultimo != NULL );
  } free(ultimo);
}   
   


void buscarpornombre(diario *inicio){
    diario *ultimo;  
     int exito=0; //nuevo codigo
     char nomBuscado[80]; 
     ultimo=inicio; 
     printf("Teclee el nombre de la persona: ");
     scanf(" %[^\n]", nomBuscado);
     if(ultimo != NULL){
        do{
           printf("\n BUSCANDO %s", nomBuscado);
           if(strcmp(ultimo->nombre,nomBuscado)==0){                                   
             printf("\n-----Nombre: %s------",ultimo->nombre);
             printf("\nTelefono: %s ", ultimo->telefono);
             printf("\nDomicilio: %s ",ultimo->domicilio); 
             printf("\nEdad: %d ",ultimo->edad);
             printf("\nPeso: %g ",ultimo->peso);
             printf("\nEstatura: %g ",ultimo->estatura);
             printf("\nTipo de Sangre: %s ",ultimo->tipodesangre);   
             printf("\nEstado Civil: %s ",ultimo->estadocivil);
             printf("\nSexo: %s ",ultimo->sexo);
             exito=1;
           }  
 
           ultimo=ultimo->sig;
        }while(ultimo != NULL );
     }else 
         printf("Agenda vacia");     
}


void buscarporapellidos(diario *inicio){
    diario *ultimo;
    ultimo=inicio;
    char apellidosb[40];
     printf("Teclee los apellidos de la persona: ");
     scanf(" %[^\n]", apellidosb);            
     if(ultimo != NULL){
        do{  
          if(strcmp(apellidosb,ultimo->apellidos)==0){  
           printf("\n-----Apellidos:-----"); //ultimo=ultimo->sig; //Asi recorre a la otra persona
           printf("\n-----%s------",ultimo->apellidos);
           printf("\nNombre: %s ", ultimo->nombre);
           printf("\nE-mail: %s ", ultimo->email);
           printf("\nTelefono: %s ", ultimo->telefono);
           printf("\nDomicilio: %s ",ultimo->domicilio);
           printf("\nEdad: %d ",ultimo->edad);
           printf("\nPeso: %g ",ultimo->peso);
           printf("\nEstatura: %g ",ultimo->estatura);
           printf("\nTipo de Sangre: %s ",ultimo->tipodesangre);   
           printf("\nEstado Civil: %s ",ultimo->estadocivil);
           printf("\nSexo: %s ",ultimo->sexo);
           }
           ultimo=ultimo->sig;
        }while(ultimo != NULL );
     }else 
         printf("Agenda vacia");     
}

void buscarporedad(diario *inicio){
/*  int edadb;
    diario *ultimo;     
    ultimo=inicio;
    ultimo=(diario *)malloc(sizeof(diario));

    printf("\nTeclee la edad de la persona: ");
        
     scanf("%d", &edadb);            
     if(ultimo != NULL){
         do{  
           int *edad;
           edad= &ultimo->edad;
           printf( "\nVerga %d", edad );
          if(edadb == edad ){  
               //ultimo=ultimo->sig; //Asi recorre a la otra persona
           printf("\n------Edad: %d------",ultimo->edad);
           printf("\nNombre: %s ", ultimo->nombre);
           printf("\nEdad: %s ",ultimo->apellidos);
           printf("\nE-mail: %s ", ultimo->email);
           printf("\nTelefono: %s ", ultimo->telefono);
           printf("\nDomicilio: %s ",ultimo->domicilio);
           printf("\nPeso: %g ",ultimo->peso);
           printf("\nEstatura: %g ",ultimo->estatura);
           printf("\nTipo de Sangre: %s ",ultimo->tipodesangre);   
           printf("\nEstado Civil: %s ",ultimo->estadocivil);
           printf("\nSexo: %s ",ultimo->sexo);
           }
           ultimo=ultimo->sig;
        }while(ultimo != NULL );
     }else 
         printf("Agenda vacia");     */
}

  void buscaruntelefonoydesplegar(diario *inicio){
 diario *ultimo;
 ultimo=inicio;
  char telefonob[20];   
  printf("\nTeclee el telefono del contacto= ");  
  scanf(" %[^\n]", &telefonob);  
    if(ultimo!=NULL){  
         do{
           if(strcmp(telefonob , ultimo->telefono)== 0){
             printf("\n-----Telefono: %s----- ", ultimo->telefono);
             printf("\n Nombre: %s ",ultimo->nombre);
             printf("\nDomicilio: %s ",ultimo->domicilio);
             printf("\nEdad: %d ",ultimo->edad);
             printf("\nPeso: %g ",ultimo->peso);
             printf("\nEstatura: %g ",ultimo->estatura);
             printf("\nTipo de Sangre: %s ",ultimo->tipodesangre);   
             printf("\nEstado Civil: %s ",ultimo->estadocivil);
             printf("\nSexo: %s ",ultimo->sexo);
           }
              ultimo=ultimo->sig;
         }while(ultimo != NULL );    
    }else 
         printf("Agenda vacia");     
}

void guardarListaTexto(diario *inicio){
   FILE *pf;
   diario *ultimo;
   if(inicio !=NULL){
   
      pf=fopen("datos.txt", "w");   //modo escritura
      if(pf== NULL)
              printf("\n NO ES POSIBLE ALMACENAR\n");        
      else{
       ultimo= inicio;                    
       printf("\n LISTA======== \n");
      do{
              //  fprintf(pf, "%s\n",ultimo->mat);
             // fprintf(pf, "%s\n",ultimo->nom);
             // fprintf(pf, "%.2f\n",ultimo->promG);
             fprintf(pf,"\n-----Nombre: %s------",ultimo->nombre);
             fprintf(pf,"\nTelefono: %s ", ultimo->telefono);
             fprintf(pf,"\nDomicilio: %s ",ultimo->domicilio); 
             fprintf(pf,"\nEdad: %d ",ultimo->edad);
             fprintf(pf,"\nPeso: %g ",ultimo->peso);
             fprintf(pf,"\nEstatura: %g ",ultimo->estatura);
             fprintf(pf,"\nTipo de Sangre: %s ",ultimo->tipodesangre);   
             fprintf(pf,"\nEstado Civil: %s ",ultimo->estadocivil);
             fprintf(pf,"\nSexo: %s ",ultimo->sexo);
                  
         ultimo=ultimo->sig;      
      }while(ultimo!=NULL);    //cuando ultimo sea null termina   TAREA VALIDAR
      fclose(pf);
     }
   }else 
      printf("No Hay información para almacenar");
}


diario *leerListaTexto(diario *inicio){
   FILE *pf;
   diario *nuevo,*ultimo;
   
   pf=fopen("datos.txt", "r");     // modo lectura
   if(pf== NULL)
     printf("\n NO ES POSIBLE LEER\n");        
   else{                        
        nuevo= (diario *)malloc(sizeof(diario));
       // fscanf(pf, " %[^\n]", nuevo->mat );
       // fscanf(pf, " %[^\n]", nuevo->nom );
       // fscanf(pf, " %lf", &nuevo->promG ); 
        
        fscanf(pf," %[^\n]",nuevo->nombre);
        fscanf(pf," %[^\n]",nuevo->apellidos);
        fscanf(pf," %[^\n]",nuevo->email);
        fscanf(pf," %[^\n]",nuevo->telefono);                  
        fscanf(pf," %[^\n]",nuevo->domicilio);
        fscanf(pf," %d", &nuevo->edad);             
        fscanf(pf,"%lf", &nuevo->peso);
        //fscanf("%lf", &nuevo->estatura); 
        fscanf(pf," %[^\n]",nuevo->tipodesangre);
        fscanf(pf," %[^\n]",nuevo->estadocivil); 
        fscanf(pf," %[^\n]",nuevo->sexo); 
        
        nuevo->sig =NULL;       
        inicio= nuevo;
        ultimo=nuevo;
        do{
           nuevo= (diario *)malloc(sizeof(diario));
           fscanf(pf," %[^\n]",nuevo->nombre);
           if (!feof(pf)){                              //si no es fin de archivo sigo leyendo
              fscanf(pf," %[^\n]",nuevo->apellidos);
              fscanf(pf," %[^\n]",nuevo->email);
              fscanf(pf," %[^\n]",nuevo->telefono);                  
              fscanf(pf," %[^\n]",nuevo->domicilio);
              fscanf(pf," %d", &nuevo->edad);             
              fscanf(pf,"%lf", &nuevo->peso);
              //fscanf("%lf", &nuevo->estatura); 
              fscanf(pf," %[^\n]",nuevo->tipodesangre);
              fscanf(pf," %[^\n]",nuevo->estadocivil); 
              fscanf(pf," %[^\n]",nuevo->sexo); 
              nuevo->sig =NULL;
              ultimo->sig=nuevo;
              ultimo=nuevo;
           }else
              free(nuevo);   //si no hay informacion libero la memoria 
        }while(!feof(pf));      //si es fin de archivo termina
        fclose(pf);               //cierro el archivo
   }
   return inicio;
}




void modificar(diario *inicio){
  diario *nuevo;
  diario *nodoSiguiente;
  nuevo=(diario *)malloc(sizeof(diario));
   char matriculab[50];
    printf("\n Introduce la matricula de la persona que quiere modificar: ");
     scanf(" %[^\n]", matriculab);
     int opcion;
        do{         
           if(strcmp(matriculab,nuevo->matricula)==0){  
              char *aux;
                                                         
              printf("\n-----Matricula:-----");
               printf("\n-----%s------",nuevo->matricula);
                 menuparamodificar();
              printf("\n Introduce el numero del Campo que quieres cambiar: ");
              
              scanf("%d", &opcion);
              switch(opcion) {
              case 1: printf("\n    Nombre=");
                      scanf(" %[^\n]",nuevo->nombre);
                      break;
              case 2: printf("\n    Apellidos=");
                      scanf(" %[^\n]",nuevo->apellidos);
                      break;
              case 3: printf("\n    email=");
                      scanf(" %[^\n]",nuevo->email);
                      break;
              case 4: printf("\n    telefono=");
                      scanf(" %[^\n]",nuevo->telefono);                  
                      break;
              case 5: printf("\n    domicilio=");
                      scanf(" %[^\n]",nuevo->domicilio);
                      break;
              case 6: printf("\n    Edad=");
                      scanf(" %d",&nuevo->edad);             
                      break;
              case 7: printf("\n    peso=");
                      scanf("%lf", &nuevo->peso);
                      break;
              case 8: printf("\n    estatura=");
                      scanf("%lf", &nuevo->estatura); 
                      break;
              case 9: printf("\n    tipo de sangre=");
                      scanf(" %[^\n]",nuevo->tipodesangre);
                      break;
              case 10: printf("\n    estado civil=");
                       scanf(" %[^\n]",nuevo->estadocivil); 
                       break;
              case 11: printf("\n    sexo=");
                       scanf(" %[^\n]",nuevo->sexo); 
                       break; 
              default: printf("\n Opcion incorrecta\n");
                       break;                 
             }
      }else printf("La matricula no coincide");
                        
   }while(opcion!=11);
      
      nuevo->sig=NULL;
      if (inicio== NULL){
       inicio= nuevo;
   }else{ nodoSiguiente=inicio;
   while(nodoSiguiente->sig != NULL ){
         nodoSiguiente=nodoSiguiente->sig;                      
    }
      nodoSiguiente->sig=nuevo; 
   }  
    printf("\n\n");
         system("pause");
}

void menuparamodificar(){
      printf("\n MENU PRINCIPAL."); 
      printf("\n 1. Nombre.");      
      printf("\n 2. Apellidos");  
      printf("\n 3. Email");
      printf("\n 4. Telefono");       
      printf("\n 5. Domicilio");
      printf("\n 6. Edad");
      printf("\n 7. Peso");
      printf("\n 8. Tipo de Sangre");
      printf("\n 9. Estado Civil");
      printf("\n 10. Sexo."); 
      printf("\n Salir");
}















