#include "Kata.hxx"

std::string multi_table(int number)
{
    std::string result;
    for (int i = 1; i <= 10; ++i){
        result += std::to_string(i) + " * " 
            + std::to_string(number) 
            + " = " + std::to_string(i * number) 
            + '\n';
    }
    result.pop_back();

    return result;
}