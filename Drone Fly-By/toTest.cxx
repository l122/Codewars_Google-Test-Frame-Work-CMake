#include "toTest.hxx"

std::string flyBy(std::string lamp, std::string drone)
{
    int pos = drone.find('T') + 1;
    std::string result(pos, 'o');
    result.append(lamp.size() - pos, 'x');
    return result;
}