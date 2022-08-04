//Selection Sort- Find the minimum element in the unsorted array and swap it with the element at beginning

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;

    int arr[n];

    // Loop for taking elements of array
    cout<<"Elements in array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Selection sort logic
    for(int j=0; j<n-1; j++){
        for(int k=j+1; k<n; k++){
            if(arr[k]<arr[j]){
                int temp= arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
        }
    }


    //To print the array
    cout<<"Sorted array is:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"   ";
    }
    cout<<endl;

    return 0;
}



