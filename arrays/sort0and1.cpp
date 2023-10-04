#include<iostream>

void printArray(int arr[], int size){
    for(int i = 0 ; i<size; i++){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

void sortedOandOne(int arr[], int size){
    int left = 0, right = size - 1;
    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[8] = {1, 0, 1, 1, 0, 0, 1, 0};
    sortedOandOne(arr, 8);
    printArray(arr, 8);
    return 0;
}
