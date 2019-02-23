#include <iostream>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <algorithm>

void strrev(char* str){
    int64_t len = strlen(str);
    for (int right = len-1, left = 0; left <= right ; --right, ++left){
        std::iter_swap(str+right, str+left);
        }
    }

void binary_to_decimal(char* binary){
    int counter = 0;
    int64_t sum = 0;
    while (*binary != '\0'){
        if (*binary == '1'){
            sum += pow(2, counter);
        } 
        counter++;
        binary++;
    }
    std::cout << sum << "\n";
}

int main(int argc, char* argv[]){
    strrev(argv[1]);
    binary_to_decimal(argv[1]);
    return 0;
}
