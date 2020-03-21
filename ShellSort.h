#ifndef SHELLSORT_SHELLSORT_H
#define SHELLSORT_SHELLSORT_H

#include <vector>
#include <string>


// класс для сортировки данных методом вставки с убывающим шагом
class ShellSort {
private:
    std::vector<int> array;
    int compare_step = 0;
public:
    ShellSort(std::string);
    void sort(int);
    int getCompareSteps();
    void print(std::string);
};


#endif //SHELLSORT_SHELLSORT_H
