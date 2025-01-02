#include <_stdio.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

bool checkDecreasingSafe(std::vector<int> &row) {
    for (int i = 0, j = 1; j < row.size(); i++, j++) {
        if (row[i] <= row[j]){
            return false;
        }
        if (row[i] - row[j] > 3) {
            return false;
        }
    }
    return true;
}

bool checkIncreasingSafe(std::vector<int> &row) {
    for (int i = 0, j=1; j < row.size(); i++, j++) {
        if (row[i] >= row[j]){
            return false;
        }
        if (row[j] - row[i] > 3) {
            return false;
        }
    }
    return true;
}

bool checkSafe(std::vector<int> &row) {
    if (row[0] > row[1]) {
        return checkDecreasingSafe(row);
    }
    if (row[0] < row[1]) {
        return checkIncreasingSafe(row);
    }
    return false;
}

std::vector<int> processRow(std::string &str) {
    std::vector<int> row;
    std::stringstream sstream{str};
    std::string line;
    for (std::string line; std::getline(sstream, line, ' ');) {
        row.emplace_back(std::stoi(line));
    }
    /* for (auto it = row.begin(); it != row.end(); it++) { */
    /*   std::cout << *it << std::endl; // dereference the iterator */
    /* } */
    /* std::cout << std::endl; */
    return row;
}

int main() {
    /* std::string filename = "test.txt"; */
    std::string filename = "input.txt";

    std::ifstream file(filename);
    std::string tmpRowString;
    int count = 0;
    int count_unsafe = 0;

    while (getline(file, tmpRowString) && file.good()) {
        std::vector<int> row = processRow(tmpRowString);

        if (checkSafe(row)) {
            count++;
        } else {
            count_unsafe++;
        }
    }

    std::cout << "safe files: " << count << std::endl;
    std::cout << "unsafe files: " << count_unsafe << std::endl;

    return 0;
}
