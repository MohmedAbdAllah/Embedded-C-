#include "Ex1_header.hpp"

Employee::Employee(const std::string& name, const std::string&job, float salary)
                : m_Name(name), m_Job(job), m_Salary(salary)
{
    std::cout << "Employee Data Saved Successfully\n";
}

void Employee::printData() const{//this function will not apply to chance any member
    std::cout << "Employee Data: \nName : " << m_Name << "\nJob : " << m_Job << "\nSalary : " << m_Salary << "\n";
}
Employee::~Employee(){
    //this is RAII concept
    std::cout << "class Employee destructed\n" ;
}

Manager::Manager(const std::string& name, const std::string&job, float salary,const std::string& departmnet)
                : m_Department(departmnet),Employee(name,job,salary){

                }

void Manager::fireEmployee(std::string name){
    std::cout << "Successfully Fire "<< name <<"  from "<< m_Department<<" department\n";
}

void Manager::hireEmployee(std::string name){
    std::cout << "Successfully hire "<< name <<" in "<< m_Department<<" department\n";
}

Manager::~Manager(){
    //this is RAII concept
    std::cout << "class Manager destructed\n" ;
}

