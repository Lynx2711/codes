// #include <iostream>
// using namespace std;

// void swap(int arr[],int a,int b){
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
// }
// void maxheap(int arr[],int n,int i){
//     int largest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if(left<n && arr[left]>arr[largest]){
//         largest = left;
//     }
//     if(right<n && arr[right]>arr[largest]){
//         largest = right;
//     }
//     if(largest!=i){
//         swap(arr,i,largest);
//         maxheap(arr,n,largest);
//     }
// }
// void buildheap(int arr[],int n){
//     for(int i = n/2 - 1;i>=0;i--){
//         maxheap(arr,n,i);
//     }
// }
// void insert(int arr[],int& n,int value){
//     n++;
//     int i = n-1;
//     arr[i] = value;
//     while(i>0 && arr[(i-1)/2]<arr[i]){
//         swap(arr,i,(i - 1)/2);
//         i = (i - 1)/2;
//     }
// }
// void print(int arr[],int n){
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[100];
//     int n = 0;
//     int ele;
//     cin>>ele;
//     for(int i = 0;i<ele;i++){
//         int value;
//         cin>>value;
//         insert(arr,n,value);
//     }
//     // buildheap(arr,n);
//     // print(arr,n);
//     //to insert new element
//     int newele;
//     cin>>newele;
//     buildheap(arr,n);
//     insert(arr,n,newele);
//     print(arr,n);
// }

#include <iostream>
using namespace std;

void swap(int arr[],int a,int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void minheap(int arr[],int n,int i){
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left<n && arr[left]<arr[smallest]){
        smallest = left;
    }
    if(right<n && arr[right]<arr[smallest]){
        smallest = right;
    }
    if(smallest!=i){
        swap(arr,i,smallest);
        minheap(arr,n,smallest);
    }
}
void buildheap(int arr[],int n){
    for(int i = n/2 - 1;i>=0;i--){
        minheap(arr,n,i);
    }
}
void insert(int arr[],int& n,int value){
    n++;
    int i = n-1;
    arr[i] = value;
    while(i>0 && arr[(i-1)/2]>arr[i]){
        swap(arr,i,(i - 1)/2);
        i = (i - 1)/2;
    }
}
void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100];
    int n = 0;
    int ele;
    cin>>ele;
    for(int i = 0;i<ele;i++){
        int value;
        cin>>value;
        insert(arr,n,value);
    }
    buildheap(arr,n);
    print(arr,n);
    //to insert new element
    // int newele;
    // cin>>newele;
    // buildheap(arr,n);
    // insert(arr,n,newele);
    // print(arr,n);
}