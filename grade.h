//header file for grade class

#ifndef GRADE_H
#define GRADE_H

#include <string>
class Grade {

private:

    double possible_points = 1000;
    double final_grade; double review_grade; double lab_grade; double assignment_grade; double term_proj_grade; double exam_grade; std::string letter;
    
public:
    Grade();
    ~Grade();
    std::string get_letter(double &Final);
    void get_fin_exam();
    void calculate_grade();
    void get_review();
    void get_lab();
    void get_term_proj();
    void get_assignment();

    

};


#endif //GRADE_H
