#include "worker.h"

Worker::Worker() : fullName("Не указано"), position("Не указано"), salary(0), hireYear(2024) {}

Worker::Worker(std::string name, std::string pos, double sal, int year) 
    : fullName(name), position(pos), salary(sal), hireYear(year) {}


Worker::~Worker() {

}


void Worker::setFullName(std::string name) { fullName = name; }
void Worker::setPosition(std::string pos) { position = pos; }
void Worker::setSalary(double sal) { if (sal >= 0) salary = sal; }
void Worker::setHireYear(int year) { hireYear = year; }


void Worker::display() const {
    std::cout << "ФИО: " << fullName << " | Должность: " << position 
              << " | Зарплата: " << salary << " | Год поступления: " << hireYear << std::endl;
}


int Worker::getExperience(int currentYear) const {
    return currentYear - hireYear;
}

std::string Worker::getFullName() const {
    return fullName;
}