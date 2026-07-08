#include <stdio.h>

int main() {
    int choice;
    float value, result;
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kilometer to Meter\n");
    printf("4. Hours to Minutes\n");
    printf("5. Days to Hours\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%f", &value);
 switch(choice) {
        case 1:
            result = (value * 9 / 5) + 32;
            printf("Fahrenheit = %.2f", result);
            break;
       	case 2:
            result = (value - 32) * 5 / 9;
            printf("Celsius = %.2f", result);
            break;
	 case 3:
            result = value * 1000;
            printf("Meters = %.2f", result);
            break;
	case 4:
            result = value * 60;
            printf("Minutes = %.2f", result);
            break;
	case 5:
            result = value * 24;
            printf("Hours = %.2f", result);
            break;
	default:
            printf("Invalid Choice");
    }

    return 0;
}
