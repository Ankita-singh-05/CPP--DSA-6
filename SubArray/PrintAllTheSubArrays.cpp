#include<iostream>
using namespace std;

int PrintSubArray(int arr[], int n){
    for(int s=0; s<n; s++){
        for(int e=s; e<n; e++){
                for(int i=s; i<=e; i++){
                    cout<<arr[i]<<" ";
                }cout<<endl;
        }
    }
}

int main(){

    int n;
    cout<<"No. of Elements: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Subarray is: "<<endl;
    PrintSubArray(arr, n);
    return 0;
}
