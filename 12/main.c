#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int res;
    FILE *f;                             // указатель на файл
    res = atoi(argv[1]) + atoi(argv[2]); // расчет суммы двух чисел, которые были получены, как аргументы командной строки
    f = freopen(argv[3], "w", stdout);   // открытие файла на запись с изменением потока вывода
    printf("%d", res);                   // запись в файл суммы
    fclose(f);                           // закрытие файла
    return 0;
}