//16.Write a C program to read temperature in centigrade and display a suitablemessage according to the temperature state below: Temp < 0 then Freezing
//weather Temp 0-10 then Very Cold weatherTemp 10-20 thenCold weather Temp 20-30 then Normal in Temp Temp 30-40 then Its Hot Temp >=40 then Its Very Hot
#include <stdio.h>

int main() {
    float temperature;

    // Read temperature from the user
    printf("Enter temperature in centigrade: ");
    scanf("%f", &temperature);

    // Determine the temperature state
    if (temperature < 0) {
        printf("Freezing weather\n");
    } else if (temperature >= 0 && temperature < 10) {
        printf("Very Cold weather\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("Cold weather\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("Normal temperature\n");
    } else if (temperature >= 30 && temperature < 40) {
        printf("It's Hot\n");
    } else { // temperature >= 40
        printf("It's Very Hot\n");
    }

    return 0;
}
s
