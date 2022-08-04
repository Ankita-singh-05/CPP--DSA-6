#include<iostream>
#include<exception>
using namespace std;

int main(){
    int a=10, b=0;
    int c;

    try{
        if(b==0){
            throw "divide by zero error";
            c=a/b;
            cout<<c<<endl;
        }
    }

    return 0;
}
