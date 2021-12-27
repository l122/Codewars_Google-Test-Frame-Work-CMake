#include "Kata.hxx"

std::vector<std::string> Kata::towerBuilder(int nFloors)
{
    //Create a vector with nFloors-elements
    std::vector<std::string> result(nFloors);

    //Array for storing characters in a floor
    char *str = new char[nFloors * 2];

    for (int i = 0; i < nFloors; i++)
    {
        for (int j = 0; j < nFloors; j++)
        {
            if (j < nFloors - 1 - i)
            {
                str[j] = ' ';
                str[nFloors*2-2-j] = ' ';
            }
            else
            {
                str[j] = '*';
                str[nFloors*2-2-j] = '*';
            }

        }
        str[nFloors*2-1] = '\0';
        std::string temp(str);
        result.at(i) = temp;
    }
    delete str;
    return result;
}