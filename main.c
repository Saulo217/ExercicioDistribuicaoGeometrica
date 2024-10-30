#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int pecaDefeituosa[6] = {1, 2, 5, 10, 20, 40};

    float P(int x) {
        return 0.01 * pow(0.99, x - 1);
    }

    for(int i = 0; i < 6; i++) {
        printf("Peça defeituosa: %d \nProbabilidade: %.4f \n", pecaDefeituosa[i], P(pecaDefeituosa[i]));
    }
    return 0;
}
