//Mateo Vaca , Joel Velastegui
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
/*librerias
stdlib.h ayuda a la gestion de memoria dinamica
string.h ayufa a trabajar y gestionar con cadenas de caracteres
time.h funciona para trabajar con la fecha y hora del sistema, esto ayudara a crear los numeros aleatorios
  */
int main(void) {
    // definicion de variables
  int situaciones;
  int Rayquaza, terminator, Darth_Vader, Dios, Dracula;
  int mana, opcion, arma, dano, ataque, uno;
  char nombre[100];
  mana=100;
  printf("Cual es tu nombre, aventurero?\n");
  scanf("%s", nombre);
  printf("%s escoge tu arma:\n", nombre);
  printf("1-Sable de luz(Daño=50)\n");
  printf("2-Charizard(Daño=1000)\n");
  printf("3-mjolnir(Daño=3000)\n");
  printf("4- Hacha leviatan(Daño=3000)\n");
  printf("5-Espadas del caos(Daño=2059)\n");
  scanf("%d",&arma);
  /* el switch se usa para comparar el valor de una expresión con múltiples casos posibles y ejecutar un bloque de código. Aqui nos ayuda a escoger el arma
  */
  switch(arma){
    case 1: 
    dano=50;
    break;
    
    case 2:
    dano=1000;
    break;
    case 3: 
    dano=3000;
    break;

    case 4: 
    dano=3000;
    break;
    
    case 5: 
    dano=2059;
    break;
  }
    
  for(int x = 0; x < 2; x++){
    srand(time(NULL)); //Generamos número aleatorio en base al tiempo
	  situaciones = rand() % 5 + 1;
    if(x==0){      
      uno=situaciones;
    }
    else{
      if(situaciones==uno){
        situaciones++;
      }
    }
    if(mana>0){
    switch(situaciones){
      case 1:
        
        printf("Un dia comun y corriente Rayquaza emerge de los cielos causando caos muerte                 y destrucción   \n 1-Pelear \n 2-Huir  \n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
          printf("Decides enfrentar a Rayquaza en una pelea que dura semanas causando mucha destruccion y muerte, pero finalmente logras vencerlo y capturarlo \n -150 mana \n");
           mana-=50;
          printf("Como recompensa a tu heroismo, el aldeano revela ser el famoso entrenador pokemon ash ketchum y ahora eres proclamado nuevo campeon mundial de la liga pokemon  + 30 \n");
          dano+=30;
          break;
          
          case 2:
          printf("Decides huir lo mas rapido que puedas, pero de proto Rayquaza utiliza avalancha. \n -250 Daño \n Es super efectivo \n");
          dano-=75;
          break;
        }
      break;
      case 2:
        terminator=300;
        printf("Estas en tu cammino a la universidad sin preocuparte por nada cuando depronto ves como una bola de luz aparece del cual sale un T-1000 preparado para acesinarte ¿Que haces?r:\n 1-Huir como cobarde  \n 2-Enfrentar al t-1000 \n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1: 
            printf("Huyes para vivir otro dia pero lastimosamente el t-1000 te alcanza .\n");
          break;
          case 2:
          printf("Sacas tu arma y te enfrentas al t-100 \n");
          break;
        }
        while(terminator>0){
	        ataque = rand() %  20+1;
          if(ataque<20){
            terminator-=dano;
            printf("Has golpeado al terminator! \n Daño-> %d\n", dano);
          }
          printf("El terminator te golpeó! \n mana - %d\n", ataque);
           mana-=ataque;
          if(mana<=0){
            break;
          }
        }
        printf("Finalmente, usando una grandiosa estrategia digna del lider de la resistencia logras destruir al terminator salvando al futuro.\n Felicidades¡¡¡¡.\n");
        
      break;
      case 3:
        printf("Dios se aparece frente a ti, diciendote  que tendras que responder unos acertijos si quieres entrar al cielo:\n");

        printf("Puede devorar todas las cosas: plantas, bestias, flores y aves. Roe el hierro y muerde acero, mata reyes, arruina ciudades y puede derribar las altas montañas.\n ¿Que soy?:\n 1-el tiempo \n 2-tu ex \n 3-La muerte \n");
        scanf("%d",&opcion);
        switch(opcion){
          case 1: 
          printf("Respondes que el tiempo Dios te mira y te deja acender al cielo .\n");
          break;
          case 2:
          printf("Respondes tu ex por los nervios esto enoja a dios condenando tu alma a una eterna tortura en el infierno \n mana - 100\n");
          mana=100;
          break;
          case 3:
          printf("Dios ve en ti a la humanidad misma y su miedo por la muerte entiende tus sentimientos y te deja vivir.\n Daño - 5 \n");
          dano-=5;
          break;
          
        }
      break;
      case 4:
       Darth_Vader=500;

        printf("Durante tu entrenamiento con el maestro obi wan descubres tu fuerte conexion con la fuerza esto llama la atencion del lord sith el cual envia a darth vader a asesinarte:\n");
        printf("En una increible pelea vader asesian a obi wan. Unete a mi y te dejare vivir\n Tienes que decidir qué hacer:\n 1-Unirte a el  \n 2- Pelear\n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
          printf("Te unes al lado oscuro volviendo un poderoso lor sith \n ");
          break;

          case 2:
          printf("Decides enfrentar a vader en una sangrienta batalla\n");
          while(Darth_Vader>0){
            /*Aqui se genera un numero aleatorio usando rand para luego encadenarlo a ataque, esta parte ayudara a similar la pelea  */

	        ataque = rand() %  20+1;
          if(ataque<20){
            Darth_Vader-=dano;
            printf("Has herido a Vader al \n Daño-> %d\n", dano);
          }
          printf("Vader te golpea \n mana - %d\n", ataque);
          mana-=ataque;
            if(mana<=0){
            break;
          }
          }
          break;
        }
        
      break;
      case 5:
        Dracula=1000;
      printf("En tu viaje a Romania decides vicitar el castillo de Vlad el empalador durante tu recorrido por el castillo precencias el ritual de una secta que despierta al vampiro dracula este despues de acesinar a sus seguidores te mira fijamente\n Lo obsevas\n y dices alejate monstruo\n El enojado te responde ¿monstruo? ¿respondeme que es un humano? es una pila miserable de secretos \n Qué decides hacer?\n 1-atacar al vampiro\n 2-quedarte inmovil\n");
      scanf("%d",&opcion);
      switch(opcion){
        case 1:
        printf("Atacas al vampiro pero este sin inmutarse de un golpe te envia a volar \n");
        while(Dracula>0){
	        ataque = rand() %  100+1;
          if(ataque<90){
            Dracula-=dano;
            printf("Has intentado golpearlo\n Daño-> %d\n", dano);
          }
          printf("el te golpeo y destroso una costilla \n HP - %d\n", ataque);
          mana-=ataque;
          if(mana<=0){
            break;
          }
          }
        break;
        case 2:
        printf("Dracula decide convertirte en un esclavo zombie al beber tu sangre, esto te convierte en un casi vampiro aumentando tu mana pero a la vez te hace un esclavo eterno\n mana - 100\n");
        mana-=100;
        break;
        
      }

      
      
      
    }
    }
    else{
      printf("Has muerto, GAME OVER\n");
      printf("Intenta de nuevo %s", nombre);
    }
    
    
  }
  if(mana>0){
      printf("Felicidades %s has ganado!\n", nombre);
    printf("mana: %d", mana);
    }
    else{
      printf("\nHas muerto, GAME OVER\n");
      printf("Intenta de nuevo %s", nombre);
    }
  
  
  return 0;
}