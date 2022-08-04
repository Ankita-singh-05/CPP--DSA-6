#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5, 6, 7, 8, 9};
    int *p, *q;

    p = &arr[0];
    q = &arr[2];

    cout<<"Address of 1st element in an array is: "<<p<<endl;
    cout<<"Address of 3rd element in an array is: "<<q<<endl;

    //Pointer Increment - it will increment by 2 bytes and will move to the next address
    p++;
    cout<<"After incrementing the pointer: "<<p<<endl;

    //POinter Decrement - it will decrement by 2 bytes and will move to the previous address
    q--;
    cout<<"Decrementing the pointer: "<<q<<endl;

    //Constant Addition in pointer - It will move by 2 integers
    p = p+2;
    cout<<"After adding 2 it will move by 2 integers: "<<p<<endl;

    //Constant Subtraction in Pointer- It will move backward by 2 integers
    q = q-2;
    cout<<"After subtracting by 2 it move backward: "<<q<<endl;

    // Subtracting 2 pointers - to find the elements between p & q
    int i;
    i = p - q;
    cout<<"Difference between 2 elements: "<<i<<endl;



    return 0;
}
