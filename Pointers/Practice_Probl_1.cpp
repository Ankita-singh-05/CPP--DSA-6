// Write a program to print the address of a variable whose value is input from user.

#include <iostream>
using namespace std;

int main(){
    int var;
    cout<<"Enter a variable of integer type: "<<endl;
    cin>>var;

    int *ptr = &var;
    cout<<"The address of the entered variable is: "<<ptr<<endl;
    return 0;
}
