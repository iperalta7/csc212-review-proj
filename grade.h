//header file for grade class

#ifndef GRADE_H
#define GRADE_H

class Grade {
private:
    double final_grade = 0;
    double review_grade = 0;
    double lab_grade = 0;
    double assignment_grade = 0;
    double term_proj_grade = 0;
    double exam_grade = 0; 
    
public:
    
    double calculate_grade();
    double get_review();
    double get_lab();
    double get_term_proj();
    double get_assignment();
    

};


#endif //GRADE_H
