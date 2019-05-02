#include <iostream>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <algorithm>

void strrev(char* str){
    // reverse string
    int64_t len = strlen(str);
    for (int right = len-1, left = 0; left <= right ; --right, ++left){
        std::iter_swap(str+right, str+left);
        }
    }

uint64_t binary_to_decimal(char* binary){
    int counter = 0;
    int64_t sum = 0;
    while (*binary != '\0'){
        if (*binary == '1'){
            sum += pow(2, counter);
        } 
        counter++;
        binary++;
    }
    return sum;
}

int main(int argc, char* argv[]){
    // reverse string to start adding from the lowest bit
    strrev(argv[1]);
    std::cout << binary_to_decimal(argv[1]) << "\n";
    return 0;
}
