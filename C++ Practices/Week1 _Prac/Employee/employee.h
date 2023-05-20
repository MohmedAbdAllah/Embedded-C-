/************************************************************************************
 * Purpose: This header is used to define employee class
 * Perperties: id, firstName, LastName, salary, hiringStatus
 * Behaviour: setId, getId, setSalary, getSalary, setHiringStatus, getHiringStatus,setName
 *            getName
*************************************************************************************/


#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <iostream>
#include <string>
namespace developer{
    class employee{
        /*parameterize constructor ex: employee(int ......)*/
        //create constructor "default constructor" 
        private:
            std::uint16_t id;
            float salary;
            std::string fullName;
            std::string teamName;
            bool hiringStatus;

        public:
            employee();//default constructor
            employee(std::uint16_t mId,
                    float mSalary,
                    std::string mFullName,
                    std::string mTeamName,
                    bool mHiringStatus) ;//parameterize constructor
                    //to enforce using parameterize constructor use "explicit" key words before parameterize constructor
                    //should not have default constructor to do that.

            /**********************************************************
             * Purpose: this function is used to set the employee id
             * Function_Name: setId
             * Parameter: uint16_t id
             * return: void
            ***********************************************************/
            void setId(std::uint16_t id);
            /**********************************************************
             * Purpose: this function is used to get the employee id
             * Function_Name: getId
             * Parameter: void
             * return: uint16_t id
            ***********************************************************/
           std::uint16_t getId(void) const;
           /**********************************************************
             * Purpose: this function is used to set the employee name
             * Function_Name: setName
             * Parameter: string fullName
             * return: void
            ***********************************************************/
           void setName(std::string fullName);
           /**********************************************************
             * Purpose: this function is used to get the employee name
             * Function_Name: getName
             * Parameter: void
             * return: string Name
            ***********************************************************/
           std::string getName(void) const;
            /**********************************************************
             * Purpose: this function is used to set the employee team
             * Function_Name: setTeam
             * Parameter: string teamName
             * return: void
            ***********************************************************/
           void setTeam(std::string teamName);
           /**********************************************************
             * Purpose: this function is used to get the employee team
             * Function_Name: getTeam
             * Parameter: void
             * return: string Name
            ***********************************************************/
           std::string getTeam(void) const;
            /**********************************************************
             * Purpose: this function is used to set the employee salary
             * Function_Name: setSalary
             * Parameter: float salary
             * return: void
            ***********************************************************/
            void setSalary(float salary);
            /**********************************************************
             * Purpose: this function is used to get the employee salary
             * Function_Name: getSalary
             * Parameter: void
             * return: float salary
            ***********************************************************/
           float getSalary(void) const;
           /**********************************************************
             * Purpose: this function is used to set the employee Hiring Status
             * Function_Name: setHiringStatus
             * Parameter: bool hiringStatus
             * return: void
            ***********************************************************/
            void setHiringStatus(bool hiringStatus);
            /**********************************************************
             * Purpose: this function is used to get the employee Hiring Status
             * Function_Name: getHiringStatus
             * Parameter: void
             * return: bool hiringStatus
            ***********************************************************/
           bool getHiringStatus(void) const;

    };

};

#endif