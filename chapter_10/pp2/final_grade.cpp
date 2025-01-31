//
// Created by tyler on 11/4/24.
//

#include "final_grade.h"

final_grade::final_grade() {
  quiz_one = 0;
  quiz_two = 0;
  midterm = 0;
  final = 0;
}

double final_grade::set_quiz_one(const double quiz_one_grade) {
  quiz_one = quiz_one_grade;
  return quiz_one;
}

double final_grade::set_quiz_two(const double quiz_two_grade) {
  quiz_two = quiz_two_grade;
  return quiz_two;
}

double final_grade::set_midterm(const double midterm_grade) {
  midterm = midterm_grade;
  return midterm;
}

double final_grade::set_final(const double final_grade) {
  final = final_grade;
  return final;
}

double final_grade::get_overall_grade(const double quiz_one_grade, const double quiz_two_grade, const double midterm_grade, const double final_grade) {
  const double average_quiz = (quiz_one_grade + quiz_two_grade) / 20.0;
  const double normalize_quiz = average_quiz * 100 * 0.25;
  const double normalize_midterm = (midterm_grade / 100.0) * 100 * 0.25;
  const double normalize_final = (final_grade / 100.0) * 100 * 0.50;
  const double overall_score = normalize_quiz + normalize_midterm + normalize_final;
  return overall_score;
}