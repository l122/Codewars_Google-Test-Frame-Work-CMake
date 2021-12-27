#include "Kata.hxx"

bool chessBoardCellColor(std::string cell1, std::string cell2)
{
    // int col1 = 0,
    //     col2 = 0,
    //     row1 = 0,
    //     row2 = 0;

    // col1 = static_cast<int>(cell1.at(0)) - 64;
    // col2 = static_cast<int>(cell2.at(0)) - 64;
    // row1 = std::stoi(cell1.substr(1,1));
    // row2 = std::stoi(cell2.substr(1,1));

    // if(abs((col1-col2)) % 2 == 0)
    // {   
    //     if(abs((row1-row2)) % 2 == 0) return true;
    //     else return false;
    // }
    // else 
    // {
    //     if(abs((row1-row2)) % 2 == 1) return true;
    //     else return false;
    // }
    return (cell1[0] + cell1[1] + cell2[0] + cell2[1]) % 2 == 0;
}