#ifndef WORKER_H
#define WORKER_H

#include <string>
#include <iostream>

class Worker {
private:
    std::string fullName;
    std::string position;
    double salary;
    int hireYear;

public:

    Worker();

    Worker(std::string name, std::string pos, double sal, int year);

    ~Worker();


    void setFullName(std::string name);
    void setPosition(std::string pos);
    void setSalary(double sal);
    void setHireYear(int year);


    void display() const;
    int getExperience(int currentYear) const;
    

    std::string getFullName() const;
};

#endif