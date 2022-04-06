#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
  // char es %c
  char one= 'a';
  // texto es %s
  //char* text = "Hola perro";                EN EL VSC NO FUNCIONA PERO ONLINE SI
  //char* mander = "mander";                  EN EL VSC NO FUNCIONA PERO ONLINE SI
  //const char[11] = "Hola Perro";             
  //const char[7] = "mander";
    //int es %i
  int i = 1898;
  int x = 8897;
    //double es %e
  double a = 0.07734;
  double b = 3.1415926;
    //float es %f
    float q = 50;
    
    printf ("genial perro \n ");
    printf ("variable %i  \n ", i);
    printf ("año %x  \n ",x);
    printf ("pi es %e \n ", b);
    printf ("Hola mapachito, aca te tiro un numerito %.2e  \n ", a);
    printf ("este caracter es una %c  \n ",one);
    //printf ("este texto es un char%s  \n ", mander);
    printf ("te quiero muuuuuuuuuucho mapachito \n ");
    printf ("flotame esto %.3f\n", q);
    
    float r = a + b;
    printf ("r es %.5f\n", r);
    
    if ( i > x) {
        printf ("i es mayor que x\n");}
        else { printf ("X es mayor que i\n");
    }
    if (a > b) {
        printf ("a es mayor que b\n");}
        else {printf ("b es mayor que a \n");
    }
   
    int years[10] = {2000,2001,2002,2020,2021};
    
    for (int i = 0; i < 5 ; i++) {
    printf ("años %i \n", years[i]);};

 //  unsigned char* numeros[10] = {0xFF,127,0159,0xaBb1,0Xx,0,010,09,127A,120};
    
  int c = 0;
  int d = 1;
  int e = 0;
  
  for (int i=0; i<30; (e = d, d = c+e, c = e, i++)){
      printf ("a es %i, b es %i \n",c,d);
  };
}



// x:xs -> si x va de 1 a 9 decimal, si x es 0 puede ser octal o hexa