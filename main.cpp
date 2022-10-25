//main file for grade project

#include "grade.h"
#include <iostream>
#include <vector>

int main(){

  //mock datasets
  std::vector<int> Cano;
  std::vector<int> Isaiah;
  std::vector<int> Edniel;
  std::vector<int> Damien;

  //main 
  Grade calc;
  




  return 0;
}

/*
create grade object
call main grade calculator member function
  - ask for lab grades (user input)
    - calculate lab percentage
  - ask for assigment grades (user input)
    - take in late points 
    - calculate assingmnets percentage to whole grade 
  - ask for term project grade
   - ask if did review project (user input)
    - return points given 

  - if current grade > 90
     - grade for final exam = 100 (exempt)
    else 
      - user input grade for finale exam
    return final exam percent to whole grade
 return addition of all percentages to get whole grade for CSC 212 
 */