#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int s= 0;
    int e = size-1;
    int mid = (s+e)/2;
    
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s = mid+1;
            //go right
        }
        else{
            e = mid-1;
            //go left
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main(){
    int arr[5] = {2,4,6,3,5};
    cout<<"index of 3 is"<< binarySearch(arr,5,6);
}