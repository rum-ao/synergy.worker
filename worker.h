#ifndef WORKER_H
#define WORKER_H

#include <string>
#include <iostream>

class Worker {
private:
    std::string fullName;      // фамилия и инициалы
    std::string position;      // название должности
    double salary;             // зарплата
    int hireYear;              // год поступления на работу

public:
    // конструктор по умолчанию
    Worker();
    // конструктор с параметрами
    Worker(std::string name, std::string pos, double sal, int year);
    // деструктор
    ~Worker();

    // методы изменения полей
    void setFullName(std::string name);
    void setPosition(std::string pos);
    void setSalary(double sal);
    void setHireYear(int year);

    // методы отображения и расчета
    void display() const;
    int getExperience(int currentYear) const;
    
    // геттер для фамилии
    std::string getFullName() const;
};

#endif
