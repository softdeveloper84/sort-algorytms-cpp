#include <iostream>
#include <fstream>
#include "ShellSort.h"

// конструктор класса
ShellSort::ShellSort(std::string filename) {
    std::ifstream file(filename);
    std::string line;
    int int_value;
    if (!file.is_open()) {
        std::cout << filename << " not found\n";
    }
    while (std::getline(file, line)){
        int_value = std::stoi(line);
        array.emplace_back(int_value);
    }
    file.close();
}

// метод для получения количества сравнений во время сортировки массива
int ShellSort::getCompareSteps() {
    return compare_step;
}

// метод для печати массива
void ShellSort::sort(int gap_step) {
    int n = array.size();
    for (int gap = n / gap_step; gap > 0; gap /= gap_step) {
        for (int i = gap; i < n; i += 1) {
            int temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp ; j -= gap) {
                array[j] = array[j - gap];
                compare_step += 1;
            }
            array[j] = temp;
        }
    }
}

// метод для печати содержимого массива
void ShellSort::print(std::string message) {
    std::cout << message;
    for(auto i: array){
        std::cout << i << "\t";
    }
    std::cout << std::endl;
}
