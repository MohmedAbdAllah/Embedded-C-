/******************************************************************************************
 * Purpose: this code is used for evaluating the grades of the students
 *          -if grade is less than 50 then they are failed
 *          -if grade is more than 50 and less than or equal 65 then they are passed
 *          -if grade is more than 65 and less than or equal 75 then they are good
 *          -if grade is more than 75 and less than or equal 85 then they are very good
 *          -if grade is more than 85 and less than or equal 100 then they are Excellent
 * Input : the grade of the student
 * Output: the evaluation of this grade
*******************************************************************************************/
#include <iostream>
#include <string>

namespace grade_evaluation{
    /*************************************************************
     * Purpose: This function is used for display a welcome massege for the user
     *          and ask him to enter its grade
     * Function Name: welcomeMassege
     * Parameter: void
     * return: void
    *************************************************************/
    void welcomeMassege(void){
        std::cout <<"Welcome in Cpp school" << std::endl;//display welcome massege
        std::cout <<"Please enter your grade:";//ask the user to enter his grade
    }
    /*****************************************************************************************
     * Purpose: this function is used to evaluate the grade of the students
     * Function Name: gradeEvaluation
     * Parameter: uint16_t grade
     * return: void
    *******************************************************************************************/
   void gradeEvaluation(std::uint16_t grade){
        //check the input grade and evaluate it (failed, passed, good, very good, or excellent)
        if((grade >= 0) && (grade <50)){
            std::cout << "failed\n";
        }else if((grade >= 50) && (grade <= 65)){
            std::cout << "Passed\n";
        }else if((grade > 65) && (grade <= 75)){
            std::cout << "good\n";
        }else if((grade > 75) && (grade <= 85)){
            std::cout << "very good\n";
        }else if((grade > 85) && (grade <= 100)){
            std::cout << "Excellent\n";
        }else{
            std::cout << "You can only enter value between 0 -> 100\n";
            std::cout << "Try again\n";
        }
   }
}

int main(){
    //display welcome massege and ask the user to enter his grade
    grade_evaluation::welcomeMassege();

    //initialize the variable that will hold the grade
    std::uint16_t grade;
    //get the input from the user
    std::cin>> grade;

    //evaluate the grade
    grade_evaluation::gradeEvaluation(grade);

    return 0;
}
