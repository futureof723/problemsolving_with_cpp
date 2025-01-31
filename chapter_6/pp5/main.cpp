#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

int main(int, char**){
    std::ifstream input_file;
    std::string file_name = "/home/tyler/problemsolving_with_cpp/chapter_6/pp5/advice.txt";

    input_file.open(file_name);

    if (input_file.fail()) {
        std::cout << "failed to open file " << file_name << std::endl;
        exit(1);
    }

    std::vector<std::string> words;
    std::string word;

    while ( input_file >> word) {
        words.push_back(word);
        //std::cout << "Debug word " << word << std::endl;
    }

    for (const auto& word : words) {
        std::cout << word << " ";
    }

    std::cout << std::endl;

    input_file.close();

    std::ofstream writing_to_file;

    writing_to_file.open(file_name);

    if (writing_to_file.fail()) {
        std::cout << "failed to open file " << file_name << std::endl;
        exit(1);
    }

    std::cout << "provide some advice to the next person running this program " << std::endl;
    std::cout << "type exit to exit and press enter" << std::endl;

    std::string sentance;

    while(true) {
        std::getline(std::cin, sentance);

        if (sentance == "Exit") {
            break;
        }

        writing_to_file << sentance << std::endl;

    }

    writing_to_file.close();

    return 0;

}
