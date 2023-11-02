#include<iostream>
#include<vector>
int main(){
    std::vector<int> arr = {1,2,3,5,7,9};
    std::vector<int> temp(arr.size());
    int k;
    std::cin>>k;
    for(int i = 0 ; i < arr.size() ; i++){
        temp[(i+k)%arr.size()] = arr [i];
    } 
    for(int i = 0 ; i < arr.size() ; i++){
      std::cout<<arr[i];
    }
     std::cout<<std::endl;
    for(int i = 0 ; i < arr.size() ; i++){
      std::cout<<temp[i];
    }
}