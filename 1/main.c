#include <stdio.h>

//Вариант 18
int main() {
    char str[10000];                // объявление массива символов str[] типа char для хранения строки
    int num;                        // объявление переменной типа int
    printf("Введите строку: ");     // Вывод текста на консоль
    scanf("%s", &str);              // Считывание с консоли строки str
    printf("%s\n", str);            // Вывод на консоль считанную строку
    printf("Введите целое число: ");// Вывод текста на консоль
    scanf("%d", &num);              // считывание переменной num с консоли
    printf("%d", num);              // вывод переменной num на консоль
    return 0;
}