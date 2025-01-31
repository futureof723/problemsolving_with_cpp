#include <iostream>

struct final_grade {
    double quiz_one;
    double quiz_two;
    double midterm;
    double final;
};

void get_quiz_one(double &quiz_one) {
    std::cout << "Please enter a grade for quiz one." << std::endl;
    std::cin >> quiz_one;
}

void get_quiz_two(double &quiz_two) {
    std::cout << "Please enter a grade for quiz two." << std::endl;
    std::cin >> quiz_two;
}

void get_midterm(double &midterm) {
    std::cout << "Please enter a grade for the midterm." << std::endl;
    std::cin >> midterm;
}

void get_final(double &final) {
    std::cout << "Please enter a grade for the final." << std::endl;
    std::cin >> final;
}

double find_quiz_score_weight(const double quiz_one,const double quiz_two) {
    const double sum = quiz_one + quiz_two;
    const double percentage = (sum / 20.0) * 100.0;
    return percentage;
}

double find_midterm_weight(const double midterm) {
    const double percentage = (midterm / 100.00) * 100.00;
    return percentage;
}

double find_final_weight(const double final) {
    const double percentage = (final / 100.00) * 100;
    return percentage;
}

double find_overall_grade(const double quiz_weight, const double midterm_weight, const double final_weight) {
    const double norm_quiz = quiz_weight * 0.25;
    const double norm_final = final_weight * 0.50;
    const double norm_midterm = midterm_weight * 0.25;
    const double sum = norm_quiz + norm_final + norm_midterm;
    return sum;
}


int main() {

    final_grade user_one{};

    get_quiz_one(user_one.quiz_one);
    get_quiz_two(user_one.quiz_two);
    get_midterm(user_one.midterm);
    get_final(user_one.final);

    std::cout << "DEBUG " << user_one.quiz_one << std::endl;
    std::cout << "DEBUG " << user_one.quiz_two << std::endl;
    std::cout << "DEBUG " << user_one.midterm << std::endl;
    std::cout << "DEBUG " << user_one.final << std::endl;

    const double quiz_weight = find_quiz_score_weight(user_one.quiz_one, user_one.quiz_two);
    const double midterm_weight = find_midterm_weight(user_one.midterm);
    const double final_weight = find_final_weight(user_one.final);

    const double overall_grade = find_overall_grade(quiz_weight, midterm_weight, final_weight);

    std::cout << "DEBUG quiz_weight " << quiz_weight << std::endl;
    std::cout << "DEBUG midterm_weight " << midterm_weight << std::endl;
    std::cout << "DEBUG final_weight " << final_weight << std::endl;

    std::cout << "Overall grade " << overall_grade << std::endl;

    if (overall_grade >= 90) {
        std::cout << "Final grade = A" << std::endl;
    } else if (overall_grade >= 80) {
        std::cout << "Final grade = B" << std::endl;
    } else if (overall_grade >= 70) {
        std::cout << "Final grade = C" << std::endl;
    } else if (overall_grade >=60) {
        std::cout << "Final grade = D" << std::endl;
    } else {
        std::cout << "Final grade = F" << std::endl;
    }

    return 0;
}