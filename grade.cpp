// source file for grade header

#include "grade.h"
#include <iostream>
#include <vector>

double Grade::calculate_grade(){
    this->term_proj_grade = get_term_proj();
    this->review_grade = get_review();
    this->assignment_grade = get_assignment();
    this->lab_grade = get_lab();

    this->final_grade = (lab_grade + assignment_grade + term_proj_grade + review_grade);
    if (this->final_grade >= 900){
        std::cout << "Exempt from final exam" << std::endl;
        this->exam_grade = 100;
    }else{
        std::cout << "Not Exempt from final exam" << std::endl;
        std  
    }
}

double Grade::get_review(){
    int g;
    std::cin >> g >> std::endl;
    g = g * (30/10);
    return g;
}

double Grade::get_lab(){
    double get_lab_grade;
    bool x = false;
    while(x = false){
        std::cout << "How many points did you get in the labs? (50 points in total)";
        std::cin >> get_lab_grade;
        if
    }
    
}

double Grade::get_assignment(){
     double assignment_grade; 
     bool x = false; 
     while (x = false){
        std::cout<< "How many points total points did you get in assignment";
        std:: cin>> assignment_grade; 
        if( assignment_grade >= 0 && assignment_grade <=   )
     
     
    
}
    
double Grade::get_term_proj(){
    
    double tproj_grade;
    bool x = false;
    while (x == false){
        std::cout << "How many points did you get in the final term project? (350 points in total)";
        std::cin >> tproj_grade;
        if(tproj_grade >= 0 && tproj_grade <= 350){
            x = true;
        }else{
            std::cout << "Invalid number for points";
        }
    } 
    return tproj_grade;
};