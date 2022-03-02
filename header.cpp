#include <iostream>
#include <fstream>
#include <list>

using namespace std;

list<string> header()
{
    string temp ("");
    list<string> names = {};

    ifstream readme("README.md");

    while (getline(readme, temp))
    {
        if (temp.at(0) == '-' || temp.at(1) == '-')
        {
            names.push_back(temp);
        }
    }

    return names;
}