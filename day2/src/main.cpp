#include <fstream>
#include <iostream>
#include <string>
#include "aoc.h"

int main() {
    std::string filename = "test.txt";
    /* filename = "safe.txt"; */
    /* filename = "unsafe.txt"; */
    filename = "input.txt";
    std::cout << filename << std::endl;


    std::ifstream file(filename);
    std::string tmpRowString;
    int count = 0;
    int count_unsafe = 0;

    typedef std::vector<int> collection;
    /* typedef std::list<int> collection; */
    while (getline(file, tmpRowString) && file.good()) {
        /* collection row = processRow<collection>(tmpRowString); */

        /* if (check_safe(row)) { */
        /*     count++; */
        /* } else { */
        /*     count_unsafe++; */
        /* } */
    }

    std::cout << "safe files: " << count << std::endl;
    std::cout << "unsafe files: " << count_unsafe << std::endl;

    return 0;
}
