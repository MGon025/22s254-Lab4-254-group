#include <iostream>
#include <fstream>
#include <list>

std::list<std::string> header()
{
    std::string temp ("");
    std::list<std::string> names = {};

    std::ifstream readme("README.md");

    while (std::getline(readme, temp))
    {
        if (temp.size() != 0 && temp.at(1) == '-')
        {
            names.push_back(temp);
        }
    }

    return names;
}