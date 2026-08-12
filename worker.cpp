#include "worker.h"

// конструктор по умолчанию
Worker::Worker() : fullName("Не указано"), position("Не указано"), salary(0), hireYear(2024) {}

// конструктор с параметрами
Worker::Worker(std::string name, std::string pos, double sal, int year) 
    : fullName(name), position(pos), salary(sal), hireYear(year) {}

// деструктор
Worker::~Worker() {
    // освобождение ресурсов (в данном случае не требуется)
}

// методы изменения полей
void Worker::setFullName(std::string name) { fullName = name; }
void Worker::setPosition(std::string pos) { position = pos; }
void Worker::setSalary(double sal) { if (sal >= 0) salary = sal; }
void Worker::setHireYear(int year) { hireYear = year; }

// метод отображения
void Worker::display() const {
    std::cout << "ФИО: " << fullName << " | Должность: " << position 
              << " | Зарплата: " << salary << " | Год поступления: " << hireYear << std::endl;
}

// метод расчета стажа
int Worker::getExperience(int currentYear) const {
    return currentYear - hireYear;
}

std::string Worker::getFullName() const {
    return fullName;
}
