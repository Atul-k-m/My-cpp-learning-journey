#include<iostream>
int* altindexswap(int arr[], int size ){
  for(int i = 0 ; i<size;i+=2){
        arr[i]= arr[i] + arr[i+1];
        arr[i+1]= arr[i] - arr[i+1];
        arr[i] = arr[i]-arr[i+1];

    }
    return arr;
}
int main(){
    int size;
    std::cout<<"Enter no of elements in array";
    std::cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }

    int* altswappedArray = altindexswap(arr,size);
    for(int i= 0 ; i<size;i++){
        std::cout<<altswappedArray[i]<<" ";
    }
}