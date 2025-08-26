#include <stdio.h>

int main(){
    float celsius = 0.0f, fahrenheit = 0.0f, kelvin = 0.0f;

    printf("Inserisci la temperatura in °C: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    kelvin = celsius + 273.0f;

    printf("La temperatura in °F è: %.1f\n", fahrenheit);
    printf("La temperatura in K è: %.1f\n", kelvin);

    return 0;
}