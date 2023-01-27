#pragma once
#include <iostream>
using namespace std;

class clsInputValidate
{
public:
    static bool is_number_between(short number, short from, short to)
    {
        if (from<number && number<=to)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};