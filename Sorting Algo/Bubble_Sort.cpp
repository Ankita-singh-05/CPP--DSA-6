// continuously swap 2 numbers until we get the sorted element

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int counter = 0;
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    cout<<"Sorted Elements is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
