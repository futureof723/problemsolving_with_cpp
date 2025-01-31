#include <iostream>
#include "final_grade.h"
#include <limits>

int main() {
  double quiz_one = 0;
  double quiz_two = 0;
  double midterm = 0;
  double final = 0;

  std::cout << "Enter some values for grades. Including quiz 1 and 2, mid term, and final grade." << std::endl;
  std::cout << "Quiz's are scored 0-10. Midterm and final grade are scored 0-100." << std::endl;

  do {
    std::cout << "Please enter a value for the first quiz (0-10): " << std::endl;;
    std::cin >> quiz_one;
    if (std::cin.fail() || quiz_one < 0 || quiz_one > 10) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a number between 0 and 10." << std::endl;
    }
  } while (quiz_one < 0 || quiz_one > 10);

  do {
    std::cout << "Please enter a value for the second quiz (0-10): " << std::endl;
    std::cin >> quiz_two;
    if (std::cin.fail() || quiz_two < 0 || quiz_two > 10) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a number between 0 and 10." << std::endl;
    }
  } while (quiz_two < 0 || quiz_two > 10);

  do {
    std::cout << "Please enter a value for the midterm (0-100): " << std::endl;
    std::cin >> midterm;
    if (std::cin.fail() || midterm < 0 || midterm > 100) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a number between 0 and 100." << std::endl;
    }
  } while (midterm < 0 || midterm > 100);

  do {
    std::cout << "Please enter a value for the final (0-100): " << std::endl;
    std::cin >> final;
    if (std::cin.fail() || final < 0 || final > 100) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a number between 0 and 100." << std::endl;
    }
  } while (final < 0 || final > 100);

  final_grade student_one;

  student_one.set_quiz_one(quiz_one);
  student_one.set_quiz_two(quiz_two);
  student_one.set_midterm(midterm);
  student_one.set_final(final);

  std::cout << "The final grade is: " << student_one.get_overall_grade(quiz_one, quiz_two, midterm, final);

  return 0;
}