/*
    Pointers in c++
*/

#include <iostream>
using namespace std;

int main(){

    //Syntax- Data_type  *pointername;
    int *ip;        // Pointer to an integer
    double *dp;     //Pointer to double
    char *cp;       //Pointer to character
    float *fp;      //Pointer to float

    int var = 5;

    ip = &var;
    cout<<"Value stored at var is: "<<var<<endl;
    //Op- 5
    cout<<"Address of the var variable stored in the pointer as a value: "<<ip<<endl;

    //We can access the value
    cout<<"Another way to access the value of variable using pointer: "<<*ip<<endl;
    //Op- 5

    //Address of the pointer variable
    cout<<"Address of the pointer ip: "<<&ip<<endl;

    // & and * will cancel out each other and print the address of var
    cout<<"Address of var by dereferencing: "<<&*ip<<endl;

    return 0;
}
