#include<iostream>
#include<vector>
void bubbleSort(int arr[],int size) {
 for (int i = 1; i < size; i++) {
       
       for(int j = 0;j<size-i;j++){
         if(arr[j]>arr[j+1]){
         std::swap(arr[j],arr[j+1]);
       }
       
    }
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
     bubbleSort(arr,size);
     for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
     }
     return 0;
}
