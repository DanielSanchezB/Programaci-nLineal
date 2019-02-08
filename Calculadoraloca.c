#include<stdio.h>
#include<math.h>

int main(){
int a,b,c;
printf("Introduzca un numero a \n");
scanf("%d",&a);
printf("Introduce un numero b \n");
scanf("%d",&b);
c=a+b;
printf("El resultado de %d + %d es %d \n",a,b,c);
c=a-b;
printf("El resultado de %d - %d es %d \n",a,b,c);
c=a*b;
printf("El resultado de %d * %d es %d \n",a,b,c);
c=a/b;
printf("El resultado de %d / %d es %d \n",a,b,c);
c=a%b;
printf("El residuo de %d / %d es %d \n",a,b,c);
return 0;
}
