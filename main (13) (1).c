/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

    //VARIABLES GLOBABALES
    char matricula[14];
    char nombre[50];
    char grupo[10];
    int grado;
    char universidad;

    //ENTRADAS
void pedir_datos(){

    printf("Introduce tu nombre:");
    scanf("%s",&nombre);
    printf("Introduce el grado:");
    scanf("%d",&grado);
    printf("Introduce el grupo:");
    scanf("%s",&grupo);

}

//SALIDAS
void mostrar_datos(){
    printf("Nombre: %s\n",nombre);
    printf("Grado: %d\n",grado);
    printf("Grupo: %s\n",grupo);

}

int main(){

      while("true"){
      pedir_datos();
      mostrar_datos();
}
    switch(grado){
       case 2 :
       
      mostrar_datos();
    case 4 :

        printf("Ingresa tu matricula:");
        scanf("%s",&matricula);
        printf("Matricula: %s\n",matricula);
    case 6 :

        printf("Vas a ir a la universidad?(si o no):");
        scanf("%s",&universidad);
    }
        if(universidad==1){
            printf("Si vas a ir a la universidad\n");
            
        }else if (universidad==2){
            printf("No vas a ir a la universidad\n");
        }
        //IMPRECION CONDICIONAL
     else  {
        printf("FUERA, TU NO ERES DE ESTE GRUPO!\n");
     }
return 0;
 } 
    
 