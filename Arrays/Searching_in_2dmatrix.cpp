#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cin>>rows>>cols;
    //Taking input from users
    int a[rows][cols];
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cin>>a[i][j];
        }
    }
    // Printing arrays elements
    cout<<"Matrix is: "<<endl;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    //Searching in matrix
    int x;
    cin>>x;
    bool flag= false;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            if(a[i][j] == x){
                cout<<i<<" "<<j<<"\n";
                flag = true;
            }
        }
        if(flag){
            cout<<"Element is found"<<endl;
            break;
        }
        else{
            cout<<"Element is not found!!"<<endl;
            break;
        }
    }
    return 0;

}
