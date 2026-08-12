#include <iostream>
#include <list>
#include "worker.h"

int main() {
    setlocale(LC_ALL, "Russian");
    std::list<Worker> workers;
    int count;
    int currentYear = 2026;

    std::cout << "Введите количество работников: ";
    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::string name, pos;
        double sal;
        int year;
        
        std::cout << "\nРаботник " << i + 1 << ":\n";
        std::cin.ignore();
        std::cout << "ФИО: "; std::getline(std::cin, name);
        std::cout << "Должность: "; std::getline(std::cin, pos);
        std::cout << "Зарплата: "; std::cin >> sal;
        std::cout << "Год поступления: "; std::cin >> year;
        
        workers.push_back(Worker(name, pos, sal, year));
    }

    int minExperience;
    std::cout << "\nВведите минимальный стаж для поиска (в годах): ";
    std::cin >> minExperience;

    std::cout << "\nРаботники со стажем более " << minExperience << " лет:\n";
    bool found = false;
    for (const auto& w : workers) {
        if (w.getExperience(currentYear) > minExperience) {
            std::cout << w.getFullName() << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "Работников с таким стажем не найдено.\n";
    }

    return 0;
}