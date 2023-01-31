#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main()
{ 
    short x=5;
    cout<<clsInputValidate::is_number_between(x,1,12)<<endl;
    cout<<clsInputValidate::is_number_between(15.5,3.5,19.6)<<endl;
    short number=clsInputValidate::read_short_number_between(1,8,"Invalid, try again");
    cout<<number<<endl;
    system("pause");
    return 0;
}