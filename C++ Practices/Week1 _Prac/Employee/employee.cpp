/******************************************************************************
 * Purpose: this file include the implementation of functions of employee class
*******************************************************************************/
#include "employee.h"

developer::employee::employee(){

}
developer::employee::employee(std::uint16_t mId,
        float mSalary,
        std::string mFullName,
        std::string mTeamName,
        bool mHiringStatus): //initialization list
        id(mId), salary(mSalary), fullName(mFullName), teamName(mTeamName),hiringStatus(mHiringStatus) {
    
    std::cout<< "The Name: "<< fullName << std::endl;
    std::cout<< "The Hiring Status: "; (hiringStatus)? std::cout <<"Yes"<< std::endl : std::cout <<"No" << std::endl;
    std::cout<< "Its ID is "<< id << std::endl;
    std::cout<< "Its team is "<< teamName << std::endl;
    std::cout<< "Its Salary is "<< salary<< std::endl;
}
/**********************************************************
 * Purpose: this function is used to set the employee id
 * Function_Name: setId
 * Parameter: uint16_t id
 * return: void
***********************************************************/
void developer::employee::setId(std::uint16_t id){
    //every object have a pointer its name is "this"
    this->id = id;
}
/**********************************************************
 * Purpose: this function is used to get the employee id
 * Function_Name: getId
 * Parameter: void
 * return: uint16_t id
***********************************************************/
std::uint16_t developer::employee::getId() const {
 return this->id;
}
/**********************************************************
  * Purpose: this function is used to set the employee name
  * Function_Name: setName
  * Parameter: string fullName
  * return: void
 ***********************************************************/
void developer::employee::setName(std::string fullName){
 this->fullName = fullName;
}
/**********************************************************
  * Purpose: this function is used to get the employee name
  * Function_Name: getName
  * Parameter: void
  * return: string Name
 ***********************************************************/
std::string developer::employee::getName() const {
 return this->fullName;
}
 /**********************************************************
  * Purpose: this function is used to set the employee team
  * Function_Name: setTeam
  * Parameter: string teamName
  * return: void
 ***********************************************************/
void developer::employee::setTeam(std::string teamName){
 this->teamName = teamName;
}
/**********************************************************
  * Purpose: this function is used to get the employee team
  * Function_Name: getTeam
  * Parameter: void
  * return: string Name
 ***********************************************************/
std::string developer::employee::getTeam() const {
 return this->teamName;
}
 /**********************************************************
  * Purpose: this function is used to set the employee salary
  * Function_Name: setSalary
  * Parameter: float salary
  * return: void
 ***********************************************************/
 void developer::employee::setSalary(float salary){
     //every object have a pointer its name is "this"
     this->salary = salary;
 }
 /**********************************************************
  * Purpose: this function is used to get the employee salary
  * Function_Name: getSalary
  * Parameter: void
  * return: float salary
 ***********************************************************/
float developer::employee::getSalary() const{
 return this->salary;
}
/**********************************************************
  * Purpose: this function is used to set the employee Hiring Status
  * Function_Name: setHiringStatus
  * Parameter: bool hiringStatus
  * return: void
 ***********************************************************/
 void developer::employee::setHiringStatus(bool hiringStatus){
     //every object have a pointer its name is "this"
     this->hiringStatus = hiringStatus;
 }
 /**********************************************************
  * Purpose: this function is used to get the employee Hiring Status
  * Function_Name: getHiringStatus
  * Parameter: void
  * return: bool hiringStatus
 ***********************************************************/
bool developer::employee::getHiringStatus() const {
 return this->hiringStatus;
}
