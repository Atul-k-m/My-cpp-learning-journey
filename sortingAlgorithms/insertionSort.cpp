#include<iostream>
#include<vector>
void insertionSort(int size,std::vector<int> &arr) {
 for (int i = 1; i < size; i++) {
       int temp = arr[i];
       int j = i-1l;
       for(;j>=0;j--){
         if(arr[j]>temp){
         arr[j+1] = arr[j];
       }
        else{
          break;
        }
     } 
     arr[j+1]=temp;
  }
}
int main(){
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    std::vector<int> arr;

   
   for (int i = 0; i < size; i++) {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        arr.push_back(element);
    }

     insertionSort(size,arr);
     for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
     }
     return 0;
}
