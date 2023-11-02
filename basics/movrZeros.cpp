#include<iostream>
#include <algorithm>
int main(){
    int arr[100] = {1,43,30,0,0,40,0,31,0,2};
    int nonZeroIndex = 0 ; 
    for(int i =0;i<10;i++){
        if(arr[i]!=0){  
            std::swap(arr[i],arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    
    }

     for(int i =0;i<10;i++){
       std::cout<<arr[i]<<" ";
       
    }
}
