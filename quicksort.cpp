#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    count = 0;
    for(int i =s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = s+count;

    int i = s,j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}

void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e) return; 
    int p = partition(arr,s,e)
    quickSort(arr,p+1,e);
}

intt main(){
    int arr[] = {5,4,8,1,7};
}