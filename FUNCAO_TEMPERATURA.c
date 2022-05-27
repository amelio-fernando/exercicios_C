#include <stdio.h>

float temperatura (float x){
 return (x - 32) * 5/9;
}

int main (){

    float tempF, tempC;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tempF);
    tempC = temperatura(tempF);
    printf("Temperatura em Celsius = %.2f", tempC);

return 0;
}
