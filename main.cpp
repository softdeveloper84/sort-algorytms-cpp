#include <iostream>
#include <vector>
#include "ShellSort.h"


int main() {
    // создаем объект класса ShellSort
    ShellSort shell_sort("/home/user/CLionProjects/shellSort/in/data_100.txt");
    // распечатываем исходный массив
    shell_sort.print("Unsorted array: ");

    // вызываем метод sort()
    shell_sort.sort(2);
    // распечатываем отсортированный массив
    shell_sort.print("Sorted array: ");
    std::cout << "Compare steps: " << shell_sort.getCompareSteps() << std::endl;
    return 0;
}

// количество операций сравнения
// размер сортируемого массива:   N=100       N=1000      N=10000
// шаг: 2                          364        7063        143131
// шаг: 3                          406        10816       155427
// шаг: 4                          472        9821        220792

// метод наиболее эффективен при шаге равном 2 (половинное деление массива)
