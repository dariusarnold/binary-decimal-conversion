#include <iostream>
#include <cmath>

int main(int argc, char* argv[]){
    auto decimal = strtol(argv[1], nullptr, 10);
    std::cout << decimal << "\n";
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
