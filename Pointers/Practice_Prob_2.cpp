//Write a program to print the address of the pointer to a variable whose value is input from user.

#include <iostream>
using namespace std;

int main(){
    int var;
    cout<<"Enter a variable: "<<endl;
    cin>>var;

    int *p = &var;
    cout<<"Address of the pointer to a variable is: "<<&p;
    return 0;
}
