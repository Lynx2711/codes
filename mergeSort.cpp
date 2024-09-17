void merge(vector<int> &arr,int s,int mid,int e){
    vector<int> temp;
    int i = s;
    int j = mid+1;

    while(i<=mid&&j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
        while(i<=mid){
            temp.push_back(arr[i++]);
        }
        while(j<=e){
            temp.push_back(arr[j++]);
        }
        for(int k=s;k<=e;k++){
            arr[k]=temp[k-s];
        }
    }
}

void merSortMethod(vector<int> &arr, int s, int e){
    if(s>=e) return;
    int mid = (s+e)/2;
    merSortMethod(arr,s,mid);
    merSortMethod(arr,mid+1,e);
    merge(arr,s,mid,e);

}


void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    merSortMethod(arr,0,n-1);

}