#include<iostream>
int duplicate(int arr[],int size,int answer){
    for(int i = 0 ; i<size; i++){
        answer = answer^arr[i];
    }
    for(int i = 1 ; i<size;i++){
           answer = answer^arr[i];
        }
        return answer;
}
int main(){
    int size,answer=0 ;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    int arr[size];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    answer=duplicate(arr,size,answer);
    std::cout<<answer;
}