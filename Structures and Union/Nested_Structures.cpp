#include<iostream>
using namespace std;

//Structure
struct address{
    int house_no;
    string house_name;
    string locality;
};

//Nested Structure
struct student{
    string name;
    int rollno;
    //Structure which is used inside structure
    address addr;
};

int main(){

    student stud1;

    stud1.name = "Ankita";
    stud1.rollno = 23;
    stud1.addr.locality = "Bt kawade rd";
    stud1.addr.house_no = 5;
    stud1.addr.house_name = "Shaanti Bhawan";

    cout<<"Student 1 detail is:"<<endl;
    cout<<"Name:"<<stud1.name<<endl;
    cout<<"Roll No:"<<stud1.rollno<<endl;
    cout<<"Address: "<<stud1.addr.house_name<<" "<<stud1.addr.locality<<" "<<"House No."<<" "<<stud1.addr.house_no<<endl;;

    return 0;
}
