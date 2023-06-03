
#ifndef Ex1_HEADER_HPP_
#define Ex1_HEADER_HPP_
#include <iostream>

class Employee{
    private:
        std::string m_Name ;
        std::string m_Job ;
        float m_Salary;

    public:
        Employee() = default;
        Employee(const std::string& name, const std::string&job, float salary);
        void printData() const;
        ~Employee();
};
class Manager : public Employee{
    private:
        std::string m_Department ;
    public:
        Manager(const std::string& name, const std::string&job, float salary,const std::string& departmnet);
        void fireEmployee(std::string name);
        void hireEmployee(std::string name);
        ~Manager();
};
#endif