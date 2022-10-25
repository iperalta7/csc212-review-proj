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

//helper function that will ask user input for the ponits they received in review project
void Grade::get_review(){
    int review;
    std::cout << "How many points did you get on the review term? (Out of 30) " << std::endl;
    std::cin >> review; 
    std::cout << "\n";
    review = review;
    this->review_grade = review;
};

//helper function that will ask user input for the points they received in the Labs

void Grade::get_lab(){
    double get_lab_grade;
    bool x = false;
    while(x == false){
        std::cout << "How many points did you get in the labs? (50 points in total) ";
        std::cin >> get_lab_grade;
        if(get_lab_grade >= 0 && get_lab_grade <= 50){
            x = true;
        }
        else{
            std::cout << "Invalid number for points. Please input again" << std::endl;
        }
    }

    this->lab_grade = get_lab_grade;
};

void Grade::get_assignment(){
     double a_grade; 
     bool x = false; 
     while (x == false){
        std::cout<< "How many points total points did you get in assignments? ";
        std:: cin>> a_grade; 
        if( a_grade >= 0 && a_grade <= 500){
            x = true; 
        }
        else { 
            std::cout<< "Invalid number for points";
        }
     }
     this->assignment_grade = a_grade;  
};

void Grade::get_term_proj(){
    double tproj_grade;
    bool x = false;
    while (x == false){
        std::cout << "How many points did you get in the final term project? (350 points in total): ";
        std::cin >> tproj_grade;
        if(tproj_grade >= 0 && tproj_grade <= 350){
            x = true;
        }
        else{
            std::cout << "Invalid number for points";
        }
    } 
    //change private data to current grade
    this->term_proj_grade = tproj_grade;
};

void Grade::calculate_grade(){
    std::string letter; //used to save letter grade

    get_lab();
    get_assignment();
    get_term_proj();

    this->final_grade = (lab_grade + assignment_grade + term_proj_grade);

    if (((this->final_grade)/900) >= 0.90){
        std::cout << "Exempt from final exam" << std::endl;
        this->possible_points = 900;
    }else{
        std::cout << "Not Exempt from final exam" << std::endl;
        std::cout << "What did you get on the final exam? (out of 100) ";
        std::cin >> this->exam_grade;
        this->final_grade += this->exam_grade;
    }

    get_review();
    this->final_grade += this->review_grade;
    
    double Final = (this->final_grade/this->possible_points)*100;
    
    std::cout << "Your final grade for CSC 212 is " << Final << std::endl;
    if((Final) >= 95){
        letter = "A";
    }else if((Final) >= 90){
        letter = "A";
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
    std::cout << "Your letter grade is: " << letter << std::endl;
};