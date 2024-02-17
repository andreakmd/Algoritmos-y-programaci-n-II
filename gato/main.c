#include <stdio.h>
#include <stdlib.h>

int main()

{
   int valor = 5;
   int*p;
   int ** pp;
   p=&valor;
   pp=&p;

   printf ("contenido en memoria: %8d direcion de memoria: %p tipo de dato: int\n", valor, &valor);
    printf ("contenido en memoria: %p direcion de memoria: %p tipo de dato: int*\n",p,&p);
    printf ("contenido en memoria: %p direcion de memoria: %p tipo de dato: int**\n",pp,&pp);
    printf ("\n\n el valor al que apunta mi puntero a entero es:%d",*p);


  return 0;
}
