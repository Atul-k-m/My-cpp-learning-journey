#include<iostream>
int uniqueElementfind(int arr[],int size , int uniqueElement){
for(int i = 0 ; i<size;i++){
        uniqueElement = uniqueElement^arr[i];
    }
    return uniqueElement;
}

int main(){
    int size , uniqueElement=0;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    int arr[size];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    uniqueElement = uniqueElementfind(arr,size,0);
    std::cout<<""<<uniqueElement;

}