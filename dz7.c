#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int power;

    printf("Введите степень двойки (целое число): ");
    scanf("%d", &power); 
    printf("2 в степени %d: ", power);

    switch (power) {
    case 10:
        printf("K (Кило)\n");
           break;
    case 20:
        printf("M (Мега)\n");
           break;
    case 30:
        printf("G (Гига)\n");
           break;
    case 40:
        printf("T (Тера)\n");
           break;
    case 50:
        printf("P (Пета)\n");
           break;
    case 60:
        printf("E (Экса)\n");
           break;
    default:
        printf("Неизвестная приставка\n");
        break;
    }
    return 0;
}
