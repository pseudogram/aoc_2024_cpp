#include <sstream>
#include <string>
#include <vector>
#include "aoc.h"

bool check_increasing(std::vector<int> row) {
    auto first = row[0];
    auto second = row[1];
    int skip = first > second ? 0 : -1;
    for (auto ptr_1 = 0, ptr_2 = skip+2; ptr_2 != row.size(); ptr_1++, ptr_2++) {
        if (ptr_1 == skip) {
            ptr_1++;
        }

        first = row[ptr_1];
        second = row[ptr_2];

        if (first >= second) {
            if (skip > -1)
                return false;
            ptr_1--;
            skip = ptr_2;
            continue;
        }

        // max diff of 3
        if (second - first > 3) {
            if (skip > -1)
                return false;
            ptr_1--;
            skip = ptr_2;
            continue;
        }
    }
    return true;
}

bool check_decreasing(std::vector<int> row){
    auto first = row[0];
    auto second = row[1];
    int skip = first < second ? 0 : -1;
    for (auto ptr_1 = 0, ptr_2 = skip+2; ptr_2 != row.size(); ptr_1++, ptr_2++) {
        if (ptr_1 == skip) {
            ptr_1++;
        }

        first = row[ptr_1];
        second = row[ptr_2];

        if (first <= second) {
            if (skip > -1)
                return false;
            ptr_1--;
            skip = ptr_2;
            continue;
        }

        // max diff of 3
        if (first - second > 3) {
            if (skip > -1)
                return false;
            ptr_1--;
            skip = ptr_2;
            continue;
        }
    }
    return true;
}

bool check_safe(std::vector<int> row) {
    if(check_increasing(row)){
        return true;
    }
    return check_decreasing(row);
}

/**
 * tested with List and vector
 */
template <typename T> T processRow(std::string &str) {
    T row{};
    std::stringstream sstream{str};
    for (std::string num; std::getline(sstream, num, ' ');) {
        row.emplace_back(std::stoi(num));
    }
    return row;
}


