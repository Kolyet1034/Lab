#include <stdio.h>
#include <math.h>


int main(void){
    float z_1, z_2, z_3;

    for (float x_n = 1.0; x_n <= 3.0; x_n += 1.3){
        for (float a_n = 2.0; a_n <= 4.0; a_n += 1.3){
            z_1 = pow((a_n - x_n) / x_n, 0.5);
            z_2 = cos(pow(a_n, 2) / x_n);
            z_3 = cos((x_n * pow(a_n, 1/3))/(a_n + 2.5))/sin((x_n * pow(a_n, 1/3))/(a_n + 2.5));
            if (z_1 > z_2) {
                if (z_2 > z_3){
                    printf("%f\n", z_1);
                } else {
                    if (z_1 > z_3){
                        printf("%f\n", z_1);
                    } else {
                        printf("%f\n", z_3);
                    }
                }
            } else{
                if (z_2 > z_3){
                    printf("%f\n", z_2);
                } else {
                    printf("%f\n", z_3);
                }
            }
        }
    }

    return 0;
}