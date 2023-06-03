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
    std::cout << "class destructed\n" ;
}