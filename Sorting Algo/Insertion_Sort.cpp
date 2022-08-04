//Insertion Sort - Insert an element from the unsorted array to its correct position in an sorted array

//Time complexity - O(n) and Space Complexity 0(1)

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size of an array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements in the array: " <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }cout<<endl;



    //Insertion sort logic
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }


    //To print the sorted array
    cout<<"Sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
