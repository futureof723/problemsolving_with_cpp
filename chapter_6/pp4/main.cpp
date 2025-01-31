#include <iostream>
#include <ostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cmath>

double find_average(std::string file_name) {
    std::ifstream input_file;
    input_file.open(file_name);

    if (input_file.fail()) {
        std::cout << "failed to open file " << file_name << std::endl;
        exit(1);
    }

    double count = 0;
    double numbers = 0;
    double average = 0;
    double sum = 0;

    while (input_file >> numbers) {
        //std::cout << "Debug numbers " << numbers << std::endl;
        sum += numbers;
        //std::cout << "Debug sum " << sum << std::endl;
        count++;
        //std::cout << "Debug count " << count << std::endl;
    }

    average = sum / count;

    input_file.close();

    return average;

}

double standard_deviation(std::string file_name) {
    std::ifstream input_file;
    input_file.open(file_name);

    if (input_file.fail()) {
        std::cout << "failed to open file " << file_name << std::endl;
        exit(1);
    }

    double count = 0;
    double numbers = 0;
    double average = 0;
    double sum = 0;
    std::vector<double> file_numbers;

    while (input_file >> numbers) {
        //std::cout << "Debug numbers " << numbers << std::endl;
        sum += numbers;
        //std::cout << "Debug sum " << sum << std::endl;
        count++;
        //std::cout << "Debug count " << count << std::endl;
        file_numbers.push_back(numbers);
    }

    average = sum / count;

    double something = 0;

    for (const auto& num: file_numbers) {
        //std::cout << "Debug num " << num << std::endl;
        //std::cout << "Debug average " << average << std::endl;
        double diff_squared = std::pow((num - average), 2);
        //std::cout << "Debug diff_squared " << diff_squared << std::endl;
        something += diff_squared;
        //std::cout << "Debug something " << something << std::endl;
    }

    double dividing = something / count;
    double deviation = std::sqrt(dividing);

    input_file.close();

    return deviation;

}

int main() {
    std::string file_name = "/home/tyler/problemsolving_with_cpp/chapter_6/pp4/double.txt";

    double calculated_average = find_average(file_name);

    std::cout << "Debug calculated_average " << calculated_average << std::endl;

    double finding_deviation = standard_deviation(file_name);

    std::cout << "finding standard ddeviation " << finding_deviation << std::endl;

    return 0;
}