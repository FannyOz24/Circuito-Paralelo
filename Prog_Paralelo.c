#include <stdio.h>
int main(void)
{
int integer1;
int integer2;
int integer3;
int voltage;
printf("Agrega el valor del voltage: ");
scanf("%d",&voltage);
printf("Agrega el valor de la R1: ");
scanf("%d",&integer1);
printf("Agrega el valor de la R2: ");
scanf("%d",&integer2);
printf("Agrega el valor de la R3: ");
scanf("%d",&integer3);
printf("VR1 es %dV\n" , voltage);
printf("VR2 es %dV\n" , voltage);
printf("VR3 es %dV\n" , voltage);
float IRa;
float IRb;
float IRc;
IRa=(float)voltage/(float)integer1;
printf("IR1 es %.2fA\n" , IRa);
IRb=(float)voltage/(float)integer2;
printf("IR2 es %.2fA\n" , IRb);
IRc=(float)voltage/(float)integer3;
printf("IR3 es %.2fA\n" , IRc);

}
