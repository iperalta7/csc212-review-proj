# CSC 212 Review Project
Repository for our Groups CSC 212 review project implementing a grade calculator. [(Github Repo Link)](https://github.com/iperalta7/csc212-review-proj.git)
### Group members
1. Isaiah Peralta 
2. Cano Morales
3. Damien Johnson
4. Edniel Campos


### Summary 
  We created a grade calculator specific to CSC 212. Although it can be altered for other courses. Our program uses URI's CSC 212 Syllabus straight from Brightspace to create the specifications and calculate the total course grade for the semester. Our program gets its input from user input. We did not feel that it was in the user's interest to have their data included inside the console nor by command arguments. Most online grade calculators (which many of us have probably used) take in their data from user input. We collaborated on this after getting a 3 hour rental for a group study at the URI Library. Most of the basic programming was done in that time. But, many updates and adjustments were still done after further recommendations through our discord group chat. We felt it was best to use a Grade class that does most of this work. Although it was required, it helped cleaned up the bulk of our code. Getting each section of the syllabus broke down our code into seprerate problems, making our colloboration more compatible and nice work-flow. The output (might be obvious) shows our user what grade that receive in number form and a letter grade. 
  
  Note: We did not feel it was best to use letter's or numbers out of 100 as the input. One lab is only worth 5 points. One assignment is worth 100 points. And, the term project is worth 350 points. The input and math comes out to be more smooth in our opinion. 
 
## Instructions 
  1. Compile using `g++ main.cpp grade.cpp -o calc.exe`
  2. Use the command in terminal `./calc.exe` to begin figuring out if you passed or failed. 
  3. The program will ask for your input, with a question format. The output "->" indicates you need to input the total points you received. 

## Sample Dataset 

| Name | Lab Grades | Assignment Grades | Term Project Grades | Exam Grades | Review Project Grades |
| --- | ----------- | ----------------- | ------------------- | ----------- | ---------------------- |
| Damien | 50 | 1 - (100)  2 - (100)  3 - (100)  4 - (100)  5 - (100) | 350 | 100 - Exempt | 30 |  
| Edniel | Text | | | | | | 
| Isaiah | Text | | | | | |
| Cano | Text | | | | | |

## Planning stage 
- Review syllabus
  - 10 labs
    - 50 pts total
    - 5 pts each
  - 5 Programming Assignments 
    - 500 pts total 
    - 100 pts each
  - Term Project 
      - 350 pts total
  - final exam 
    - 100 pts
  - Review project 
    - 30 pts

Late Policy: 
  10% off per day (3 days max)

1. get lab grades
2. get programming assignment grades
3. get term project grade
4. get final exam grade
5. get review project grade

Psuedo-code: 

```
create grade object
call main grade calculator member function
  - ask for lab grades (user input)
    - calculate lab percentage
  - ask for assigment grades (user input)
    - take in late points 
    - calculate assingmnets percentage to whole grade 
  _ ask if did review project (user input)
    - return points given 
  - ask for term project grade
  - if current grade > 90 or 92 i dont remeber
     - grade for final exam = 100 (exempt)
    else 
      - user input grade for finale exam
    return final exam percent to whole grade
 return addition of all percentages to get whole grade for CSC 212 
```

