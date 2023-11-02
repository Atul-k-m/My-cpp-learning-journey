#include<iostream>
int main(){
    int n ;
    std::cout<<"no of elements"<<std::endl;
    std::cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        std::cin>>arr[i];
       
    }
    for(int i =0;i<n;i++){
      std::cout<<arr[i];
     
       
    }
      std::cout<<std::endl;
     
    for(int i =0;i<n/2;i++){
       arr[i]=arr[n-i-1]+arr[i];
       arr[n-i-1] = arr[i]-arr[n-i-1];
       arr[i] = arr[i]-arr[n-i-1];
    }
    for(int i =0;i<n;i++){
       std::cout<<arr[i];
       
    }
}