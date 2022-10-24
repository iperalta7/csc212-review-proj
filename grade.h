//header file for grade class

#ifndef GRADE_H
#define GRADE_H

class Grade {
private:
    double final_grade = 0;
    double review_grade = 0;
    double lab_grade = 0;
    double assignment_grade = 0;
    
public:
    
    double calculate_grade();
    double review_proj();
    double lab_grade();
    double term_proj();
    double assignment_grade();
    

};


#endif //GRADE_H
