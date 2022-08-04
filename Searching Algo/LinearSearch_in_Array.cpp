#include <iostream>
using namespace std;

//Linear Search function
int LinearSearch(int arr[], int n, int key){
    //Array traversal to check the element
    for(int i=0; i<n; i++){
        if(arr[i]== key){
            return i;
        }
    }
     return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<LinearSearch(arr, n, key);

    return 0;
}
