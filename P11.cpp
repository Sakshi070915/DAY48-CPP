#include <iostream>
using namespace std;
int main(){
    int var = 5;

    int*point_var=&var;

    cout<<"var = "<<var<<endl;

    cout<<"*point_var = "<<*point_var<<endl
        <<endl;

    cout<<"Changing value of var to 7: "<<endl;

    var = 7;

    cout<<"var = "<<var<<endl;

    cout<<"*point_var = "<<*point_var<<endl
        <<endl;

    cout<<"Changing value of var to 16:"<<endl;

    *point_var=16;

    cout<<"var = "<<var<<endl;

    cout<<"*point_var = "<<*point_var <<endl;
    return 0;
}
