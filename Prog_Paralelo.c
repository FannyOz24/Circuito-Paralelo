//Fanny Selene Ortiz Blanco 4°B MAAU
//Programa para calcular la resistencia y la corriente total 
#include <stdio.h>
int main()
{
    float R1, R2, R3;
    float Voltaje,RT,I1,I2,I3,IT;
    printf("\n Escribe el voltaje: \n");
    scanf("%f",&Voltaje);
    printf("\n Escribe el valor de R1,R2,R3 separadas por coma: \n");
    scanf("%f,%f,%f",&R1,&R2,&R3);

    I1=Voltaje/R1; //corriente 1
    printf("\n La corriente 1 es: %.2f\n",I1);
    I2=Voltaje/R2;//corriente 2
    printf("\n La corriente 2 es: %.2f\n",I2);
    I3=Voltaje/R3;//corriente 3
    printf("\n La corriente 3 es: %.2f\n" ,I3);
    IT=I3+I2+I1; //corriente total
    RT=(1/R1)+(1/R2)+(1/R3);
    printf("\n La corriente total es: %.2f\n ",IT);
    RT=(1/R1)+(1/R2)+(1/R3);
    printf("\n La resistencia total es: %.2f\n",RT);
    return 0;
}
