#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main()
{ 
    cout<<clsInputValidate::is_number_between(5,1,12)<<endl;
    cout<<clsInputValidate::is_number_between(15.5,3.5,19.6)<<endl;
    double number=clsInputValidate::ReadNumber("Invalid, try again");
    cout<<number<<endl;
    system("pause");
    return 0;
}