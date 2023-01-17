#include "oop2.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void Upper_Case(string& str)
{
    str[0] = (char)toupper(str[0]);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
            str[i + 1] = (char)toupper(str[i + 1]);
    }
}


void Delete_Spaces(string& str)
{
    string::iterator end_pos = remove(str.begin(), str.end(), ' ');
    str.erase(end_pos, str.end());
}