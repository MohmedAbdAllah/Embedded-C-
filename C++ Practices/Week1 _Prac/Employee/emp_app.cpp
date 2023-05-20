/****************************************************************
 * Purpose: this application is used to show the using of employee class
*****************************************************************/
#include "employee.h"

int main(){
    //create object from employee
    developer::employee emp(8,14500.0,"Mohamed Abdallah","R&D",true);

    /*emp.setHiringStatus(true);
    emp.setId(8);
    emp.setName("Mohamed Abdallah");
    emp.setSalary((float)14500.0);
    emp.setTeam("R&D");

    std::cout<< "The Name: "<< emp.getName() << std::endl;
    std::cout<< "The Hiring Status: "; (emp.getHiringStatus())? std::cout <<"Yes"<< std::endl : std::cout <<"No" << std::endl;
    std::cout<< "Its ID is "<< emp.getId() << std::endl;
    std::cout<< "Its team is "<< emp.getTeam() << std::endl;
    std::cout<< "Its Salary is "<< emp.getSalary() << std::endl;*/

}