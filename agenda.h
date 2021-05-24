#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct agenda {
   char nombre[50];
   char matricula[50];
   char apellidos[50];
   char email[50];     
   char telefono[90];
   char domicilio[60];
   int edad;
   double peso;
   double estatura;
   char tipodesangre[50];
   char estadocivil[60];
   char sexo[50];
   struct agenda *sig;
};typedef struct agenda diario;

void menu();
diario* leerDatos(diario *inicio);
void buscarpornombre(diario *inicio);
void listarContactos(diario *inicio );
void buscarporapellidos(diario *inicio);
void buscarporedad(diario *inicio);
void buscaruntelefonoydesplegar(diario *inicio);
void modificar(diario *inicio);
void menuparamodificar();

