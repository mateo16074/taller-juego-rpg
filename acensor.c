#include <stdio.h>

int main(void) {

  int seleccion , pisollama , pisonume , pisollega , i;
  int pisoactual = 0;
  int pisosube = 0;
  

    do{
    printf("seleccione la opcion que Desea:\n1. Llamar asensor\n2. seleccionar piso\n3. mostrar piso actual\n4. salir\n");
    scanf("%d",&seleccion);
      if((seleccion<1)||(seleccion>4)) {
        printf("Elija una opcion valida\n");
      }
    }
    while((seleccion<1)||(seleccion>4));

//---------------------------------------------------------------------------------------
  
  switch(seleccion){
    
//---------------------------------------------------------------------------------------
    
    case 1: printf("ingrese el piso al cual desea llamar el asensor\n");
  scanf("%d",&pisollama);
  do{
        printf("El elevador esta en el piso: ");
        printf("%d\n",pisoactual);
        
        pisoactual += 1;
    
      }
  while(pisoactual!=pisollama);
      
  if(pisollama = pisoactual){
      printf("El elevador ya esta en su piso\n");
    }
      break;

//---------------------------------------------------------------------------------------
  
    case 2: printf("ingrese el piso al cual desea llegar \n");
  scanf("%d",&pisollega);

  for (i = 0; i <= pisollega; i++){
    printf("El elevador esta en el piso: ");
        printf("%d\n",pisosube);
       pisosube += 1;
  }
  if (pisosube = pisollega){
     printf("El elevador llego al piso solicitado");
  } 
      
      break;
//---------------------------------------------------------------------------------------

    case 3: printf("seleccione el numero del piso en el que se encuentra \n");
    scanf("%d",&pisonume);
    
 switch(pisonume){
    case 0: 
      printf("Uste se enceuntra en la Planta Baja\n");
      break;
    case 1: 
      printf("Uste se enceuntra en el Primer Piso\n");
      break;
    case 2: 
      printf("Uste se enceuntra en el Segundo Piso\n");
      break;
    case 3: 
      printf("Uste se enceuntra en el Tercer Piso\n");
      break;
    case 4: 
      printf("Uste se enceuntra en el Cuarto Piso\n");
      break;
    case 5: 
      printf("Uste se enceuntra en el Quinto Piso\n");
      break;
    case 6: 
      printf("Uste se enceuntra en el Sexto Piso\n");
      break;
    case 7: 
      printf("Uste se enceuntra en el Septimo Piso\n");
      break;
    case 8: 
      printf("Uste se enceuntra en el Octavo Piso\n");
      break;
    case 9: 
      printf("Uste se enceuntra en el Noveno Piso\n");
      break;
    case 10: 
      printf("Uste se enceuntra en el Decimo Piso\n");
      break;
 }
    
//--------------------------------------------------------------------------------------
    
    case 4: printf("Gracias por usar el elevador <3\n");
      
      break;
//---------------------------------------------------------------------------------------
  } 
  return 0;
}