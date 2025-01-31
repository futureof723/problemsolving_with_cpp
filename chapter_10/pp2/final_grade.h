//
// Created by tyler on 11/4/24.
//

#ifndef FINAL_GRADE_H
#define FINAL_GRADE_H



class final_grade {
  private:
    double quiz_one;
    double quiz_two;
    double midterm;
    double final;
  public:
    final_grade();
    double set_quiz_one(const double quiz_one_grade);
    double set_quiz_two(const double quiz_two_grade);
    double set_midterm(const double midterm_grade);
    double set_final(const double final_grade);
    static double get_overall_grade(const double quiz_one_grade, const double quiz_two_grade, const double midterm_grade, const double final_grade);
};



#endif //FINAL_GRADE_H
