#include <cstdint>
#include <iostream>
#include <cmath>

void decimal_to_binary(int64_t decimal){
    for (int i = log2(decimal); i >= 0; i--){
        if ((decimal - pow(2, i)) >= 0){
            std::cout << "1";
            decimal -= pow(2, i);
        }else{
            std::cout << "0";
        }
    }
    std::cout << "\n";
}

int main(int argc, char* argv[]){
    int64_t decimal = strtol(argv[1], nullptr, 10);
    std::cout << decimal << "\n";
    decimal_to_binary(decimal);
}
