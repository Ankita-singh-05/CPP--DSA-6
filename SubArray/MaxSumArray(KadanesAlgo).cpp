// Kadane's Algorithm - It is used to find the maximum sum of subarray in the efficient manner
// Time Complexity of using this algorithm is : 0(n)

#include<iostream>
using namespace std;


//Kadane's Algorithm

int MaxSumSubArray(int arr[], int n){
    int maxSum = 0;
    int current = 0;
    for(int i=0; i < n ; i++){
        current = current + arr[i];
    if(current > maxSum){
        maxSum = current;
    }
    if(current < 0){
        current = 0;
    }
    }
    return maxSum;
}


int main(){
    int n;
    cout<<"Enter size of an array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter elements in array: " <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Maximum sum of the subArray is: " <<endl;
    cout<<MaxSumSubArray(arr, n)<<endl;
    return 0;
}
