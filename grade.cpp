// source file for grade header

#include "grade.h"
#include <iostream>
#include <vector>
#include <string>

//default constructor
Grade::Grade(){
};

//default deconstructor
Grade::~Grade(){
};

/*helper function that will ask user input for the points they received in review project
 review project is worth 30 points according to the syllabus */
void Grade::get_review(){
    int review;
    bool x = false;
    while (x == false){
      std::cout << "How many points did you get on the review term? (Out of 30) -> ";
      std::cin >> review;
      if(review >= 0 && review <= 30){
        x = true;
      }
      else{
        std::cout << "Invalid number for points. Please input again." << std::endl;
      }
    }
    std::cout << "\n";
    review = review;
    this->review_grade = review;
};

/* This function asks for user input on the ammount of points they got in all 10 labs
 Each lab is worth 5 points
 Input asks again if they input a bad number */
void Grade::get_lab(){
    double get_lab_grade;
    bool x = false;
    while(x == false){
        std::cout << "How many points did you get in all 10 labs? (50 points in total) -> ";
        std::cin >> get_lab_grade;
        if(get_lab_grade >= 0 && get_lab_grade <= 50){
            x = true;
        }
        else{
          std::cout << "Invalid number for points. Please input again." << std::endl;
        }
    }
    std::cout << "\n";
    this->lab_grade = get_lab_grade;
};

/*This function is used to ask the user for their grade in each assignment (100 per assignment).
 User should only be able to input between 0 and 100 otherwise it will ask to input again.
 returns the total amount of points they got for assignments (max is 500)
 */
void Grade::get_assignment(){
     double a_grade; bool x = false; double total = 0;

     //loops to ask score all 5 assignments
     for(int i = 0; i < 5; i++) {
       x = false; //used to validate number inputed
       while (x == false) { //stops if number is inbetween 0 and 100
         std::cout << "How many points total points did you get in assignment " << i+1 << " ? (100 points per assignment) -> ";
         std::cin >> a_grade;
         if (a_grade >= 0 && a_grade <= 100) {
           x = true;
           total += a_grade; //adds to total, max should be 500 points
         } else {
           std::cout << "Invalid number for points. Please input again." << std::endl;
         }
       }
     }
     std::cout << "\n";
     this->assignment_grade = total;
};

/*This function gets the grade for the term project from user input and saves it to the private data
 Validates number as well other wise it will as for a new input
*/
void Grade::get_term_proj(){
    double tproj_grade;
    bool x = false;
    while (x == false){
        std::cout << "How many points did you get in the final term project? (350 points in total) -> ";
        std::cin >> tproj_grade;
        if(tproj_grade >= 0 && tproj_grade <= 350){
            x = true;
        }
        else{
            std::cout << "Invalid number for points. Please input again." << std::endl;
        }
    }
    std::cout << "\n";
    //change private data to current grade
    this->term_proj_grade = tproj_grade;
};

/*helper function that will ask user input for the points they received in the final exam
 final project is worth 100 points out of the 1000 according to the syllabus */
void Grade::get_fin_exam(){
  double final;
  bool x = false;
  while (x == false) {
    std::cout
        << "How many points did you get on the final exam? (Out of 100) -> ";
    std::cin >> final;
    if (final >= 0 && final <= 100) {
      x = true;
    } else {
      std::cout << "Invalid number for points. Please input again."
                << std::endl;
    }
  }
  std::cout << "\n";
    this->exam_grade = final;
};

//get letter grade function
std::string Grade::get_letter(double &Final){
  std::string letter;
  if((Final) >= 95){
    letter = "A";
  }else if((Final) >= 90){
    letter = "A-";
  }else if((Final) >= 87){
    letter = "B+";
  }else if((Final) >= 83){
    letter = "B";
  }else if((Final) >= 80){
    letter = "B-";
  }else if((Final) >= 77){
    letter = "C+";
  }else if((Final) >= 73){
    letter = "C";
  }else if((Final) >= 70){
    letter = "C-";
  }else if((Final) >= 67){
    letter = "D+";
  }else if((Final) >= 60){
    letter = "D";
  }else if((Final) >= 0){
    letter = "F";
  }
  return letter;
}

/* main member function that calls the other function to get all the section grades and
    calculates the grade of the user, outputs letter grade as well
 */
void Grade::calculate_grade(){

    get_lab();
    get_assignment();
    get_term_proj();

    this->final_grade = (lab_grade + assignment_grade + term_proj_grade);

    if (((this->final_grade)/900) >= 0.90){
        std::cout << "Exempt from final exam" << std::endl;
        this->possible_points = 900;
    }else{
        std::cout << "Not Exempt from final exam" << std::endl;
        get_fin_exam();
        this->final_grade += this->exam_grade;
    }

    //adds review proj to final grade (30 points added to the current points they have)
    get_review();
    this->final_grade += this->review_grade;

    double Final = (this->final_grade/this->possible_points)*100.00;
    std::cout << "Your final grade for CSC 212 is " << Final << std::endl;
    this->letter = get_letter(Final);
    std::cout << "Your letter grade is: " << this->letter << std::endl;
};