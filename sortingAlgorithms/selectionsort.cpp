#include<iostream>
#include<vector>
void selectionSort(int arr[],int size) {
 for (int i = 0; i < size-1; i++) {
       int minIndex = i;
       for(int j = i+1;j<size;j++)
       if(arr[j]<arr[minIndex]){
         minIndex = j ;
       }
       std::swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    int arr[size];

   
    for (int i = 0; i < size; i++) {
        std::cout << "Enter the elements of the array: ";
        std::cin >> arr[i];
    }
     selectionSort(arr,size);
     for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
     }
     return 0;
}
