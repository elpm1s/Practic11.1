#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 10

int main() {
  
    setlocale(LC_ALL, "RUS");

    float A[N], temp = 0;
    double sum = 0;

    for (int i = 0; i < N; i++) {
        printf("A[%d] = ", i + 1);

        scanf("%f", &temp);

        A[i] = temp;
    }

    printf("%s%s%s\n", "Индекс|", "Исходнное значение|", "Новое значение");

    for (int i = 0; i < N; i++) {
        float old = A[i];
        float new = old / 10;

        sum += old;

        printf("%.d       %.0f                 %.1f\n", i + 1, old, new);
    }
    
    double sr = (double)sum / N;
    printf("%s%.2f", "Среднее арифметическое: ", sr);
}
