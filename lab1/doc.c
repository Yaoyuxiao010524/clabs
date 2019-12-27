#include <stdio.h>

int main()
{   printf("fahr\tcelsius\n");   
    float celsius, fahr;
    int lower,upper,step;

    lower = 0;
    upper = 100;
    step = 5;


    celsius = lower;
    while (celsius <= upper) {
        fahr=(9.0*celsius)/5.0+32.0;
        printf("%3f %6.1f\n", fahr,celsius);
        celsius = celsius + step;
    }
    return 0;
}
