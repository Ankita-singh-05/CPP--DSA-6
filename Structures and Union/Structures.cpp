#include <iostream>
using namespace std;

struct Person{
    char name[100]; //Members
    double salary;
    int age;
};

int main(){
    //Declare variable that uses the structure
    Person p1;
    cout<<"Name of the person 1 is:"<<endl;
    cin.getline(p1.name, 100);
    cout<<"Enter age: "<<endl;
    cin>>p1.age;
    cout<<"Enter Salary: "<<endl;
    cin>>p1.salary;

    cout<<"The details of the person is:"<<endl;
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Salary:"<<p1.salary<<endl;
    return 0;
}
