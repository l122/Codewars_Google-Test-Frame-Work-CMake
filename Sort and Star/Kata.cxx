#include "Kata.hxx"

std::string twoSort(std::vector<std::string> s)
{   
    std::string result;
    std::sort(s.begin(), s.end());
    for (const auto & s:s[0]){
        result.push_back(s);
        result+="***";
    }
    result = result.substr(0, result.length()-3);
    return result;
}