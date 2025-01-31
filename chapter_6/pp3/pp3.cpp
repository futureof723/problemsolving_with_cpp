#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

void parse(std::ifstream& input_file) {
    std::string last;
    std::string first;
    int numbers = 0;
    int count = 0;
    std::vector<int> storage;

    input_file >> last >> first;
    std::cout << last << std::endl;
    std::cout << first << std::endl;

    for (int i = 0; i <=9; i++) {
        int temp = 0;
        input_file >> temp;
        //std::cout << "temp " << temp << std::endl;
        numbers = numbers + temp;
        storage.push_back(temp);
        count++;
        //std::cout << "numbers " << numbers << std::endl;
        //std::cout << "i " << i << std::endl;
    }

    std::ofstream output_file;
    
    output_file.open("output_file.txt");

    if (output_file.fail()) {
        std::cout << "Opening file failed " << std::endl;
        exit(1);
    }

    double average = static_cast<double>(numbers) / count;

    std::cout << "average " << average << std::endl;

    output_file << last << " " << first << " ";

    for (const auto& num : storage) {
        output_file << num;
        output_file << " ";
    }

    output_file << average;

    output_file.close();
}

int main() {
    
    std::ifstream input_file;
    
    input_file.open("grades.txt");

    if (input_file.fail()) {
        std::cout << "Failed to open input file " << std::endl;
    }

    parse(input_file);

    input_file.close();
    

    return 0;
}