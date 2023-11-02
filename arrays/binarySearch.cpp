#include<iostream>
int binarySearch(int arr[], int size, int key){
    int start = 0 , end = size-1 ;
    int mid = start + (end-start)/2;
    for(int i=0 ; i < size;i++){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] <key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
        return -1;
}

int main(){
    int size , key;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    int arr[size];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    std::cout<<"enter elements to be searched ";
    std::cin>>key;
    int indexof = binarySearch(arr,size,key);
    std::cout<<"index is "<<indexof<<std::endl;
}