#ifndef WORKER_H
#define WORKER_H

#include <string>
#include <iostream>

class Worker {
private:
    std::string fullName;      // Фамилия и инициалы
    std::string position;      // Название должности
    double salary;             // Зарплата
    int hireYear;              // Год поступления на работу

public:
    // Конструктор по умолчанию
    Worker();
    // Конструктор с параметрами
    Worker(std::string name, std::string pos, double sal, int year);
    // Деструктор
    ~Worker();

    // Методы изменения полей
    void setFullName(std::string name);
    void setPosition(std::string pos);
    void setSalary(double sal);
    void setHireYear(int year);

    // Методы отображения и расчета
    void display() const;
    int getExperience(int currentYear) const;
    
    // Геттер для фамилии
    std::string getFullName() const;
};

#endif // WORKER_H
